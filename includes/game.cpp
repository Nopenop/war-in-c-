#include "player.h"
#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include "game.h"
#include <stdlib.h>
#include <string>

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

void nextTurn(){
    Card* card1 = player1->deck->draw();
    Card* card2 = player2->deck->draw();
    mainDeck.placeCard(card1);
    mainDeck.placeCard(card2);
    if (card1->getVal() > card2->getVal()){
        passOutCardsPlayer(player1);
    } else if (card2->getVal() > card1->getVal()){
        passOutCardsPlayer(player2);
    } else {
        for(int i = 0; i<2; i++){
            mainDeck.placeCard(player1->deck->draw());
            mainDeck.placeCard(player2->deck->draw());
        }
        nextTurn();
        
    }
}