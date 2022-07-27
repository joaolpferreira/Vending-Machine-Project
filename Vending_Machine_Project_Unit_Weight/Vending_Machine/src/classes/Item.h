#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Item
{
public:
    Item(string name, double price);
    ~Item();
    
    string name;
    double price;
    
    virtual void print_attribute() =0;
    virtual void print_attribute_file(ofstream& my_file) =0;
    virtual int get_attribute() =0;
    virtual void add_attribute(int add) =0;
};


#endif // ITEM_H
