#include "Weight_Item.h"
#include <iomanip>
Weight_Item::Weight_Item(string name, int weight, double price): Item(name, price*weight), weight(weight)
{
}

Weight_Item::~Weight_Item()
{
}

void Weight_Item::print_attribute(){
    cout << "\t" << weight << "g";
}

void Weight_Item::print_attribute_file(ofstream& my_file){
    my_file << "\t" << weight << "g";
}

int Weight_Item::get_attribute(){
    return weight;
}

void Weight_Item::add_attribute(int add_weight){
    weight += add_weight;
}