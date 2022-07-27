#include "Vending_Machine.h"
#include <cctype>
#include <fstream>
#include <iomanip>

Vending_Machine::Vending_Machine(Clients_List *clients) : clients_list(clients)
{
    location = "Oporto";
    basket = new Basket();
}

Vending_Machine::~Vending_Machine()
{
    delete basket;
}

std::string Vending_Machine::get_location(){
    return location;
}

char Vending_Machine::entry(){
    char option {};
    cout << "Welcome to Preços Loucos Supermaket!\n\n" << endl; 
    do{
        cout << "Start shopping? (Y/y) ";
        option = cin_check_letter();
    } while(option!='Y');
        
    return option;
}

void Vending_Machine::new_shopping(){
    char opt2{};
    do {
        basket->print_basket();
        basket->print_total();
        opt2 = menu();
        
                
        if(opt2=='A'){
            Item *item = select_item();
            basket->add_item_basket(item);
        }
                
        else if(opt2=='B'){
            if(basket->get_total_amount() < 0.01)
                cout << "Basket is empty, please add something first" << endl;
            else
                cout << (basket->remove_item_by_number()? "\nItem removed" : "\nItem not present in the basket") << endl;
        }
                
        else if(opt2=='C'){
            if(basket->get_total_amount() < 0.01){
                cout << "Basket is empty, please add something first";
            }
            else if(clients_list->use_client()){
                clients_list->print_clients();
                int *client_id = new int(0);
                if(clients_list->find_client_id(client_id)){
                    client = clients_list->get_client(client_id);
                    payment = create_payment();
                    if(payment->make_payment_client(client, clients_list, basket, client_id)){
                        
                        updated_client = clients_list->get_client(client_id);
                        receipt = new Receipt();
                        receipt->print_receipt_terminal(this->location, basket, payment, updated_client);
                        receipt->print_receipt_file(this->location, basket, payment, updated_client);
                                
                                opt2='Q';
                    }
                }
            }
            else{
                payment = create_payment();
                payment->total_amount = basket->get_total_amount();
                if(payment->make_payment()){
                    cout << endl;
                        
                    receipt = new Receipt();
                    receipt->print_receipt_terminal(this->location, basket, payment, 0);
                    receipt->print_receipt_file(this->location, basket, payment, 0);
                                
                    opt2='Q';
                }
            }
        }
                
        else if(opt2=='Q'){
            cout << "Returning to the home menu...\n\n" << endl;
            //basket->clear_basket();        
        }
    
    } while(opt2!='Q');
}

char Vending_Machine::menu(){
    char option {};
    
    do{
        cout << "\n---------------" << endl;
        cout << "\nMENU" << endl; 
        cout << "A - Add Item to the Basket" << endl; 
        cout << "B - Remove Item from the Basket" << endl; 
        cout << "C - Proceed to Payment" << endl; 
        cout << "Q - Cancel" << endl;
        cout << "\n---------------" << endl;
        option = cin_check_letter();
        if((option!='A') && (option!='B') && (option!='C') && (option!='Q'))
            cout << "Please enter a valid option" << endl;
    }while((option!='A') && (option!='B') && (option!='C') && (option!='Q'));
   
    return option;
}

void Vending_Machine::menu_select_item(){
    cout    << "\n----------------------" << endl;
    cout    << "\nOPTIONS" << endl;
    cout    << "1- Meat" << endl
            << "2- Water 1.5L" << endl
            << "3- Fish" << endl
            << "4- Backpack" << endl;
    cout    << "\n----------------------" << endl;
}

Item* Vending_Machine::select_item(){
    float opt {};
    Item *item;
    do{
        menu_select_item();
        cin >> opt;
        cin_check_number();
    } while((opt!=1) && (opt!=2) && (opt!=3) && (opt!=4));
    
    if(opt==1){
        int *weight = new int();
        ask_weight(weight);
        item = new Weight_Item("Meat", *weight, 0.00449);
        delete weight;
    }
    else if(opt==2){
        int *quantity =new int();
        ask_quantity(quantity);
        item = new Unit_Item("Water 1.5L", *quantity, 1.26);
        delete quantity;
    }
    else if(opt==3){
        int *weight = new int();
        ask_weight(weight);
        item = new Weight_Item("Fish", *weight, 0.00799);
        delete weight;
    }
    else if(opt==4){
        int *quantity =new int();
        ask_quantity(quantity);
        item = new Unit_Item("Backpack", *quantity, 32.99);
        delete quantity;
    }
    
    return item;
}

void Vending_Machine::ask_weight(int *weight){
    do{
        cout << "How many grams? ";
        cin >> *weight;
        cin_check_number();
    } while((*weight<1));
}

void Vending_Machine::ask_quantity(int *quantity){
    do{
        cout << "Quantity? ";
        cin >> *quantity;
        cin_check_number();
    } while(*quantity<1);
}


void Vending_Machine::cin_check_number(){
    if(cin.fail()) {
        cin.clear();
    }
    cin.ignore(1000,'\n');
}

char Vending_Machine::cin_check_letter(){
    char option{};
    cin >> option;
    cin.ignore(1000,'\n');
    option = toupper(option);
    
    return option;
}

void Vending_Machine::print_payment_menu(){
    cout << "\n--------------------------" << endl;
    cout    << "PAYMENT OPTIONS:" << endl;
    cout    << "1 - Card" << endl
            << "2 - Cash" << endl;
            
    cout << "\n--------------------------" << endl;
}

int Vending_Machine::read_payment_opt(){
    float opt {};
    do{
        cin >> opt;
        cin_check_number();
    } while((opt!=1) && (opt!=2));
    return opt;
}

Payment* Vending_Machine::create_payment(){
    int opt {};
    print_payment_menu();
    opt = read_payment_opt();
    
    Payment *payment;
    if(opt==1){
        payment = new Card();
    }
    if(opt==2){
        payment = new Cash();
    }
    return payment;
}

