#include "Backpack.h"
#include <cmath>
#include <iomanip>

Backpack::Backpack(int quantity) : Item("Backpack", quantity, 32.99)
{
}

Backpack::~Backpack()
{
}

void Backpack::print_attribute(){
    //cout << volume << "1.5L";
    cout << volume << "L";
    //std::cout << std::fixed << std::setprecision(2) << volume << " L";
}

void Backpack::print_attribute_file(ofstream& my_file){
    //cout << volume << "1.5L";
    my_file << setw(2) << left << volume << "L";
    //my_file << "\t";
    //std::cout << std::fixed << std::setprecision(2) << volume << " L";
}

double Backpack::get_attribute(){
    //cout << volume << "1.5L";
    return volume;
}