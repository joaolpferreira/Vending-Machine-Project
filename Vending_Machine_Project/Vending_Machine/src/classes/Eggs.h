#ifndef EGGS_H
#define EGGS_H

#include "Item.h"


class Eggs: public Item{
public:
    Eggs(double attribute, int quantity);
    ~Eggs();
    double dozen;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual double get_attribute() override;
    
};

#endif // EGGS_H
