#include <iostream>
#include "includes/card.h"

int main() {
    Card*  c1 = new Card(0,0);
    std::cout << c1->getVal() << std::endl;
    std::cout << c1->getSuit() << std::endl;
    return 0;
}