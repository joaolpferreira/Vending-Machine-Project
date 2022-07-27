#ifndef MEAT_H
#define MEAT_H
#include "Item.h"
class Meat: public Item{
public:
    Meat(double attribute, int quantity);
    ~Meat();
    double kilos;
    
    virtual void print_attribute() override;
    virtual void print_attribute_file(ofstream& my_file) override;
    virtual double get_attribute() override;
};

#endif // MEAT_H
