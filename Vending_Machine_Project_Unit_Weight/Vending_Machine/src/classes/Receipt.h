#ifndef RECEIPT_H
#define RECEIPT_H

#include "Basket.h"
#include "Payment.h"
#include "Client.h"
#include "Card.h"
//#include "Vending_Machine.h"
#include <fstream>

class Receipt
{
private:
    int tax_number {0};

public:
    Receipt();
    ~Receipt();
    
    int ask_tax_number();
    void print_receipt_terminal(string location, Basket *basket, Payment *payment, Client *updated_client);
    void print_receipt_file(string location, Basket *basket, Payment *payment, Client *updated_client);
    char cin_check_letter();
    void cin_check_number();
    char* get_time();
};

#endif // RECEIPT_H
