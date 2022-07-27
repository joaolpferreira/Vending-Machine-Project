#ifndef UNIT_ITEM_H
#define UNIT_ITEM_H
#include "Item.h"
#include <iomanip>

class Unit_Item: public Item
{
public:
    Unit_Item(string name, int quantity, double price);
    ~Unit_Item();
    int quantity;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual int get_attribute() override;
    virtual void add_attribute(int add_qnt) override;
};

#endif // UNIT_ITEM_H
