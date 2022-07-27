#include "Unit_Item.h"

Unit_Item::Unit_Item(string name, int quantity, double price): Item(name, price*quantity), quantity(quantity)
{
}

Unit_Item::~Unit_Item()
{
}

void Unit_Item::print_attribute(){
    cout << quantity;
}

void Unit_Item::print_attribute_file(ofstream& my_file){
    my_file << setw(4) << left << quantity;
}

int Unit_Item::get_attribute(){
    return quantity;
}

void Unit_Item::add_attribute(int add_qnt){
    quantity += add_qnt;
}