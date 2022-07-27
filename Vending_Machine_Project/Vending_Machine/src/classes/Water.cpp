#include "Water.h"
#include <iomanip>
#include <cmath>

Water::Water(double attribute, int quantity) : Item("Water", quantity, 0.56*attribute), volume(attribute)
{
    
}

Water::~Water()
{
}

void Water::print_attribute(){
    //cout << volume << "1.5L";
    std::cout << volume << "L";
    
}

void Water::print_attribute_file(ofstream& my_file){
    //cout << volume << "1.5L";
    my_file << setw(4) << left << volume << "L";
    my_file << "\t";
}

double Water::get_attribute(){
    //cout << volume << "1.5L";
    return volume;
}

