#include <iostream>
#include "includes/deck.h"
#include "includes/card.h"
int main() {
    Deck deck;
    Card* c1 = deck.draw();
    std::cout << c1->getSuit() << std::endl;
    std::cout << c1->getVal() << std::endl;
    return 0;
}