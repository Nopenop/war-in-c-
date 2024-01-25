#ifndef DECK_H
#define DECK_H
#include "card.h"

class Deck{
    protected:
    Card* cards[52];
    unsigned short int size;
    public:
    Deck();
    void shuffle();
    Card* draw();
    unsigned short int getSize() const;
    unsigned short int placeCard(Card* card);
};

#endif