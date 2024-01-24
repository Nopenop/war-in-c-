#ifndef PLAYER_H
#define PLAYER_H

#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include <stdlib.h>

class Player{
    public:
    PlayerDeck* deck;
    Player();
    int winGame() const;
};

#endif