#include "Item.h"

Item::Item(string name, double price) : name(name), price(price)
{
}

Item::~Item()
{
}

/*v
void Item::print_attribute(){
    cout << "ITEM" << endl;
}

void Item::print_attribute_file(ofstream& my_file){
    my_file << "ITEM" << endl;
}


double Item::get_attribute(){
    cout << "ITEM" << endl;
    return 1.0;
}*/