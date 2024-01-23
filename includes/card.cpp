#include "card.h"


Card::Card(const unsigned short int& val,const unsigned short int& suit){
    setSuit(suit);
    setVal(val);
}



unsigned short int Card::getSuit() const{
    return suit;
}
unsigned short int Card::getVal() const{
    return val;
}
void Card::setVal(const unsigned short int &val ){
    this->val = val%13;
}
void Card::setSuit(const unsigned short int &suit){
    this->suit = suit%4;
}

