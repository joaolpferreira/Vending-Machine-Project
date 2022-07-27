#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Item
{
public:
    Item(string name, int quantity, double price);
    ~Item();
    
    string name;
    int quantity;
    double price;
    
    virtual void print_attribute() =0;
    virtual void print_attribute_file(ofstream& my_file) =0;
    virtual double get_attribute() =0;
};


#endif // ITEM_H
