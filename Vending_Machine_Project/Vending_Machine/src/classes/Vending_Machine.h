#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include <iostream>
#include <string.h>
#include "Item.h"
#include "Receipt.h"
#include "Basket.h"
#include "Eggs.h"
#include "Meat.h"
#include "Water.h"
#include "Backpack.h"
#include "Payment.h"
#include "Cash.h"
#include "Card.h"
#include "Client.h"
#include "Clients_List.h"

using namespace std;

class Vending_Machine
{
public:
    Vending_Machine(Clients_List *clients);
    ~Vending_Machine();
    
    Client *client;
    Client *updated_client;
    Receipt *receipt;
    Basket *basket;
    Clients_List *clients_list;
    Payment *payment;
    
private:
    string location;
    
   
public:
    string get_location();
    
    char entry();
    void new_shopping();
    char menu();
    void menu_select_item();
    Item* select_item();
    void ask_kilos(double *kilos);
    void ask_dozens(double *dozen, float *quantity);
    void ask_volume(double *volume, float *quantity);
    void ask_quantity(float *quantity);
    
    void print_payment_menu();
    int read_payment_opt();
    Payment* create_payment(double total);
    
    void cin_check_number();
    char cin_check_letter();
};

#endif // VENDING_MACHINE_H
