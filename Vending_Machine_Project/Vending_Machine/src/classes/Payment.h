#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>

//include "Client.h"
#include "Clients_List.h"

using namespace std;

class Payment
{
public:
    Payment(double total);
    ~Payment();
    
    double total_amount;
    double change_cash;
    
    virtual long int get_card_number() =0;
    
    virtual bool make_payment() =0;
    bool make_payment_client(Client *client, Clients_List *clients_list, Basket *basket, int *client_id);
    virtual bool with_card() =0;
    
    void cin_check_number();
};

#endif // PAYMENT_H
