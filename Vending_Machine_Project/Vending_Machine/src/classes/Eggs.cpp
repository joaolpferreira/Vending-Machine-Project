#include "Eggs.h"
#include <iomanip>

Eggs::Eggs(double attribute, int quantity) : Item("Eggs", quantity, 2.56*attribute), dozen(attribute)
{
    
}

Eggs::~Eggs()
{
}

void Eggs::print_attribute(){
    if(dozen==1)
        std::cout << "X12";
    if(dozen==0.5)
        std::cout << "X6  ";
}

void Eggs::print_attribute_file(ofstream& my_file){
    if(dozen==1)
        my_file << setw(7) << left << "X12";
    if(dozen==0.5)
        my_file << setw(7) << left << "X6";
}

double Eggs::get_attribute(){
    //cout << volume << "1.5L";
    return dozen;
}
