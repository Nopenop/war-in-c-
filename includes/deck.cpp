#include "deck.h"
#include "card.h"
#include <stdlib.h>
#include <time.h>
Deck::Deck(){
    size = 52;
    unsigned short int i = 0;
    while (i < size){
        cards[i] = new Card(i,i);
        i++;
    }
    shuffle();
}

void Deck::shuffle(){
    unsigned short int i = 0;
    Card* temp = nullptr;
    srand(time(NULL));
    unsigned short int random = 0;
    while (i < size){
        random = rand() % 52;
        temp = cards[i];
        cards[random] = cards[i];
        cards[i] = temp;
        i++;
    }
}

Card* Deck::draw(){
    if (size < 1){
        return nullptr;
    }
    Card* temp = new Card(cards[size-1]->getVal(),cards[size-1]->getSuit());
    delete cards[size-1];
    size--;
    return temp;
}

unsigned short int Deck::getSize() const{
    return size;
}
