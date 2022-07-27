#include "Basket.h"
#include <iomanip>
#include <iostream>
#include <cstdlib>


Basket::Basket() 
{
    //item = new Item(1,1);
}

Basket::~Basket()
{
    //delete item;
}

bool Basket::add_item_basket(Item *item_add){
    int i=0;
    if(item_count ==0){
        items.push_back(item_add);
        //item = item_add;
        item_count++;
        total_amount+=item_add->price; 
        return true;
    }
    else{
        for(auto it: items){
            if(it->name == item_add->name){
                items.at(i)->add_attribute(item_add->get_attribute());
                items.at(i)->price += item_add->price;
                total_amount+=item_add->price; 
                return false;
            }
            i++;
        }
        items.push_back(item_add);
        //item = item_add;
        item_count++;
        total_amount+=item_add->price; 
    }
    return true;
}


bool Basket::remove_item_by_number(){
    if(total_amount == 0.0){
        cout << "Basket is empty, please add something first" << endl;
    }
    else{
        int *remove_number =new int();
        ask_remove_number(remove_number);
        item_count--;
        total_amount-= items.at(*remove_number-1)->price;
        total_amount = abs(total_amount);
        items.erase(items.begin()+*remove_number-1);
        return true;
    }
    return false;
}

/*
bool Basket::remove_item_name(){
    int i=0;
    if(total_amount == 0.0){
        cout << "Basket is empty, please add something first" << endl;
    }
    else{
        string *remove_name = new string();
        double *remove_attribute =new double();
        ask_remove_name(remove_name);
        ask_remove_attribute(remove_attribute);
        cin_check_number();
        for(auto it: items){
            if((it->name == *remove_name) && (it->get_attribute() == *remove_attribute)){
                item_count--;
                total_amount -= it->price*it->quantity;
                items.erase(items.begin()+i);
                
                return true;
            }
            i++;
        }
    }
    
    return false;
}

 
 
void Basket::ask_remove_name(string *name){
    cout << "Which Item would you want to remove? ";
    cin >> *name;
}

void Basket::ask_remove_attribute(double *attribute){
    cout << "With which attribute? ";
    cin >> *attribute;
    
}
*/
void Basket::ask_remove_number(int *number){
    
    do{
        cout << "Which item number do you wish to remove? ";
        cin >> *number;
        cin_check_number();
    } while(*number > item_count);
    
    
}

void Basket::print_basket(){
    cout << "\n ===================================" << endl;
    cout << "\n BASKET\n";
    cout << "Item"
         << "\t\t\t\t" << "Qnt"
         << "\t" << " Price" << endl;
    print_items();
    cout << "\n ===================================" << endl;
}

void Basket::print_items(){
    int i=1;
    for(auto it: items){
        cout << "\n" << i << "-" << it->name << "\t\t\t";
        it->print_attribute(); 
        cout << "\t" << setw(5) << right << it->price << "€ " << endl;
        i++;
    }
    if(i==1){
        cout << "\nThere are no items in the basket" << endl;
    }
}

void Basket::print_items_file(ofstream& my_file){
    for(auto it: items){
        my_file << "\n" << setw(1) <<left << it->name << "\t\t\t\t";
        it->print_attribute_file(my_file); 
            my_file << "\t" << setw(5) << right << it->price<< "€ " << endl;
    }
}

void Basket::print_total(){
    cout    << "\nNumber of products in the basket: " << item_count << "\n" 
            << "Total amount: " << total_amount << "€" << endl;
}


void Basket::clear_basket(){
    item_count = 0;
    items.clear();
    total_amount = 0;
    //item = 0;
}

void Basket::cin_check_number(){
    if(cin.fail()) {
        cin.clear();
    }
    cin.ignore(1000,'\n');
}

double Basket::get_total_amount(){
    return total_amount;
}