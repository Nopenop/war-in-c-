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

void Game::printState() const{
    
}