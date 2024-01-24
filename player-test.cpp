#include "includes/player-deck.h"
#include "includes/card.h"
#include "includes/player.h"
#include <iostream>
#include <stdlib.h>
int main() {
    Player *p1 = new Player();
    std::cout << p1->winGame() <<std::endl; 
    return 0;
}