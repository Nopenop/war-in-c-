#include "includes/deck.h"
#include "includes/player-deck.h"
#include "includes/card.h"
#include "includes/player.h"
#include "includes/game.h"
#include <iostream>
#include <stdlib.h>

int main(){
    Game game;
    while(game.nextTurn()){
    }
    std::cout<<"game worked";
}