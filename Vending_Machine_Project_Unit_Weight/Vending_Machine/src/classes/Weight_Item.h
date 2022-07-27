#ifndef WEIGHT_ITEM_H
#define WEIGHT_ITEM_H
#include "Item.h"

class Weight_Item: public Item
{
public:
    Weight_Item(string name, int weight, double price);
    ~Weight_Item();
    int weight;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual int get_attribute() override;
    virtual void add_attribute(int add_weight) override;
};

#endif // WEIGHT_ITEM_H
