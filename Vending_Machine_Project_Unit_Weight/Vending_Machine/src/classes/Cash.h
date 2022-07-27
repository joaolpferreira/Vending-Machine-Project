#ifndef CASH_H
#define CASH_H


#include "Payment.h"

class Cash: public Payment
{
public:
    Cash();
    ~Cash();
    
    long int get_card_number() override;
    virtual bool make_payment() override;
    virtual bool with_card() override;
  
};

#endif // CASH_H
