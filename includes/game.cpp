#include "player.h"
#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include "game.h"
#include <stdlib.h>
#include <string>
#include <iostream>

Game::Game(){
    mainDeck = new Deck();
    player1 = new Player();
    player2 = new Player();
    passOutCardsAll();
}

void Game::passOutCardsAll(){
    bool isplayer1 = true;
    while (mainDeck->getSize() > 0){
        if(isplayer1) player1->deck->placeCard(mainDeck->draw());
        else player2->deck->placeCard(mainDeck->draw());
        isplayer1 = !player1;
    }
}

void Game::passOutCardsPlayer(Player *player){
    while(mainDeck->getSize() > 0){
        player->deck->placeCard(mainDeck->draw());
    }
}

int Game::checkIfLost() const{
    if (player1->loseGame() == 1) return 1;
    else if (player2->loseGame() == 1) return 2;
    else return 0;
}

int Game::nextTurn(){
    Card* card1 = player1->deck->draw();
    Card* card2 = player2->deck->draw();
    mainDeck->placeCard(card1);
    mainDeck->placeCard(card2);
    int loser = 0;
    if (card1->getVal() > card2->getVal()){
        // player 1 wins the turn
        passOutCardsPlayer(player1);
        loser = checkIfLost();
        if (loser == 2){
            std::cout << "Player 1 Won! Player 2 Lost.";
            return 0;
        } else if (loser == 1){
            std::cout << "Player 2 Won! Player 1 Lost.";
            return 0;
        }
        return 1;
    } else if (card2->getVal() > card1->getVal()){
        // player 2 wins the turn
        passOutCardsPlayer(player2);
        loser = checkIfLost();
        if (loser == 2){
            std::cout << "Player 1 Won! Player 2 Lost.";
            return 0;
        } else if (loser == 1){
            std::cout << "Player 2 Won! Player 1 Lost.";
            return 0;
        }
        return 1;
    } else {
        for(int i = 0; i<2; i++){
            mainDeck->placeCard(player1->deck->draw());
            mainDeck->placeCard(player2->deck->draw());
            if (loser == 2){
                std::cout << "Player 1 Won! Player 2 Lost.";
                return 0;
            } else if (loser == 1){
                std::cout << "Player 2 Won! Player 1 Lost.";
                return 0;
            }
        }
        nextTurn();
    }
    return 0;
}