#include "includes/player-deck.h"
#include "includes/card.h"
#include <iostream>
#include <stdlib.h>
int main() {
    PlayerDeck* p1 = new PlayerDeck(); 
    Card *c1 = p1->draw();
    // checks to see if a deck of size 0 draws a card
    if(!c1){
        std::cout << "it worked" << std::endl;
    }
    return 0;
}