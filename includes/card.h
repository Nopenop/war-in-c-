#ifndef CARD_H
#define CARD_H

class Card 
{
    unsigned short int suit;
    unsigned short int val;
    public:
    Card(const unsigned short int& val, const unsigned short int& suit);
    unsigned short int getSuit() const;
    unsigned short int getVal() const;
    void setSuit(const unsigned short int &suit );
    void setVal(const unsigned short int &val );
};

#endif