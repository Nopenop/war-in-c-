#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include <stdlib.h>


class Game{
    public:
    Game();
    Player* player1;
    Player* player2;
    Deck* mainDeck;
    void passOutCardsAll();
    void passOutCardsPlayer(Player* player);
    int nextTurn();
    int checkIfLost() const;
};



#endif