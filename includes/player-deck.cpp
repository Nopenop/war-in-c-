#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include <stdlib.h>
PlayerDeck::PlayerDeck(){
    size = 0;
    for(unsigned short int i = 0; i < 52; i++){
        cards[i] = nullptr;
    }
}