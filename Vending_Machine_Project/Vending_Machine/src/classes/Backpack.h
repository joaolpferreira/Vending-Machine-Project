#ifndef BACKPACK_H
#define BACKPACK_H
#include "Item.h"

class Backpack: public Item
{
public:
    Backpack(int quantity);
    ~Backpack();
    
    int volume = 40;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual double get_attribute() override;

};

#endif // BACKPACK_H
