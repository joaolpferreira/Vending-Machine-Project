#include "Meat.h"
#include <string.h>
#include <iomanip>
Meat::Meat(double attribute, int quantity) : Item("Meat", quantity, 4.49*attribute), kilos(attribute)
{
    
}

Meat::~Meat()
{
}

void Meat::print_attribute(){
   
    cout << setprecision(3) << kilos << "Kg";
    cout << setprecision(2);
}

void Meat::print_attribute_file(ofstream& my_file){
    my_file << setprecision(3);
    my_file << setw(4) << left << kilos << "Kg";
    my_file << setprecision(2);
}

double Meat::get_attribute(){
    //cout << volume << "1.5L";
    return kilos;
}