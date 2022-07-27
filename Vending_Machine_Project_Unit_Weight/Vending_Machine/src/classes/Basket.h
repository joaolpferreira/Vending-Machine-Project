#ifndef BASKET_H
#define BASKET_H

#include <string.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "Item.h"

using namespace std;

class Basket
{
private:
    int item_count =0;
    double total_amount =0;
    vector<Item*> items;
    
public:
    Basket();
    ~Basket();
    
    
    //Item *item {};
    //int item_count = 0;
    //double total_amount = 0;
    
    bool add_item_basket(Item *item);
    bool remove_item_by_number();
    //bool remove_item_by_name();
    //void ask_remove_name(string *name);
    void ask_remove_number(int *number);
    //void ask_remove_attribute(double *attribute);
    void print_basket();
    void print_items();
    void print_items_file(ofstream& my_file);
    void print_total();
    
    void cin_check_number();

    void clear_basket();
    
    double get_total_amount();
};

#endif // BASKET_H
