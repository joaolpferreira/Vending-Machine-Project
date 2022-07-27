#ifndef CARD_H
#define CARD_H

#include "Payment.h"

class Card: public Payment
{
public:
 long int card_number {0};
 
public:
    
    Card(double total);
    ~Card();
    
    long int get_card_number() override;
    
    virtual bool make_payment() override;
    virtual bool with_card() override;
    
    int getDigit(int number);
    int getSize(long d);
    long getPrefix(long number, int k);
    bool prefixMatched(long number, int d);
    int sumOfDoubleEvenPlace(long int number);
    int sumOfOddPlace(long number);
    bool is_valid(long int number);
    
    
};


#endif // CARD_H


