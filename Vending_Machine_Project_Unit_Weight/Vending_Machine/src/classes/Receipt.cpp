#include "Receipt.h"

#include <iostream>

#include <iomanip>
#include <ctime>

using namespace std;

Receipt::Receipt()
{
}

Receipt::~Receipt()
{
}

void Receipt::print_receipt_terminal(string location, Basket *basket, Payment *payment, Client *updated_client){
    
    tax_number = ask_tax_number();
    cout << "###################################################\n" << endl;
    cout << "\n\t\t Preços Loucos Supermarket!\n" << endl;
    cout << "Adress: " << location << endl;
    cout << get_time() << endl;
    if(tax_number){
        cout << "Tax number: " << tax_number << endl;
    }
    cout << "*****************************************************" << endl;
    cout << "\nItem"
         << "\t\t\t\t" << "Qnt"
         << "\t" << " Price" << endl;
    basket->print_items();
    cout << "\n*****************************************************" << endl;
    if(basket->get_total_amount() != payment->total_amount){
        cout << "\nBasket:\t\t\t\t\t" << setw(8) << right << basket->get_total_amount() << "€" << endl;
        cout << "Discount:\t\t\t\t" << setw(8) << right << basket->get_total_amount() - payment->total_amount << "€" << endl;
    }
    cout << "\nTotal:\t\t\t\t\t" << setw(8) << right << payment->total_amount << "€" << endl;
    if(payment->with_card() != true){
        cout << "You entered:\t\t\t\t" << setw(8) << right << payment->total_amount + payment->change_cash << "€" << endl;
    }
    cout << "Change:\t\t\t\t\t" << setw(8) << right << payment->change_cash << "€" << endl;
    if(payment->total_amount != 0){
        if(payment->with_card()){
        cout << "Delivered:\t";
        cout << setw(29) << right<< "Card - **** **** **** " << payment->get_card_number()%10000 << "\n" << endl;
        }
        else{
            cout << "Delivered:\t\t\t\t";
            cout << setw(10) << right << "Cash\n" << endl;
        }
    }
    if(updated_client != 0){
        cout << "Your client account balance is:\t\t" << setw(8) << right << updated_client->cash << "€\n" << endl;
    }
    cout << endl;
    cout << "\t\t\tThank you!" << endl;
    cout << "###################################################\n" << endl;
    //cout << endl << endl;
}

void Receipt::print_receipt_file(string location, Basket *basket, Payment *payment, Client *updated_client){    
    ofstream my_file;
    my_file.open("writing_to_file.txt");
    my_file << fixed << setprecision(2);
    my_file << "\n\t\t\t Preços Loucos Supermarket!\n" << endl;
    my_file << "Adress: " << location << endl;
    my_file << get_time() << endl;
    if(tax_number){
        my_file << "Tax number: " << tax_number << endl;
    }
    my_file << "*****************************************************" << endl;
    my_file << "\nItem"
         << "\t\t\t\t\t" << setw(6) << left << " Qnt"
         << "\t" << setw(6) << right << "Price" << endl;
    basket->print_items_file(my_file);
    my_file << "\n*****************************************************" << endl;
    if(basket->get_total_amount() != payment->total_amount){
        my_file << "\nBasket:\t\t\t\t\t\t\t\t" << setw(8) << right << basket->get_total_amount() << "€" << endl;
        my_file << "Discount:\t\t\t\t\t\t\t" << setw(8) << right << basket->get_total_amount() - payment->total_amount << "€" << endl;
    }
    my_file << "\nTotal:\t\t\t\t\t\t\t\t" << setw(8) << right << payment->total_amount << "€" << endl;
    if(payment->with_card() != true){
        my_file << "You entered:\t\t\t\t\t\t" << setw(8) << right << payment->total_amount + payment->change_cash << "€" << endl;
    }
    my_file << "Change:\t\t\t\t\t\t\t\t" << setw(8) << right << payment->change_cash << "€" << endl;
    if(payment->total_amount != 0){
        if(payment->with_card()){
        my_file << "Delivered:\t";
        my_file << setw(29) << right<< "Card - **** **** **** " << payment->get_card_number()%10000 << "\n" << endl;
        }
        else{
            my_file << "Delivered:\t\t\t\t\t\t\t";
            my_file << setw(10) << right << "Cash\n" << endl;
        }
    }
    if(updated_client != 0){
        my_file << "Your client account balance is:\t\t" << setw(8) << right << updated_client->cash << "€\n" << endl;
    }
    my_file << endl;
    my_file << "\t\t\t\t\tThank you!" << endl;
    my_file << endl << endl;
}

void Receipt::cin_check_number(){
    if(cin.fail()) {
        cin.clear();
    }
    cin.ignore(1000,'\n');
}

char Receipt::cin_check_letter(){
    char option{};
    cin >> option;
    cin.ignore(1000,'\n');
    option = toupper(option);
    
    return option;
}

int Receipt::ask_tax_number(){
    //long long int tax_num {};
    char option {};
    do{
        cout << "Do you wish tax number? (Y/N) ";
        option = cin_check_letter();
    } while((option != 'N') && (option != 'Y'));
    
    if(option == 'Y'){
        do{
            cout << "Please enter your tax number: ";
            cin >> tax_number;
            cin_check_number();
            if(tax_number>=100000000 && tax_number < 1000000000){
                return tax_number;
            }
            cout << "Invalid tax number" << endl;
            cout << "If you no longer want tax number you can enter -1" << endl;
        }while(tax_number != -1);
    }
    
    return 0;
}



char* Receipt::get_time() {
   // current date/time based on current system
    time_t now = time(0);
       
    // convert now to string form
    char* dt = ctime(&now);

    //cout << dt << endl;
    return dt;
}