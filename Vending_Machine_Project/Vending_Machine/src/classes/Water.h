#ifndef WATER_H
#define WATER_H

#include "Item.h"
#include <iostream>
#include <string.h>


class Water: public Item{
public:
    Water(double attribute, int quantity);
    ~Water();
    double volume;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual double get_attribute() override;
};

#endif // WATER_H
