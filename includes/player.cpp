#include "player.h"
#include "player-deck.h"
#include "deck.h"
#include "card.h"
#include <stdlib.h>
#include <iostream>

Player::Player(){
    deck= new PlayerDeck(); 
}

int Player::winGame() const{
    return (deck->getSize() == 52);
}
