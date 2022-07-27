#include "Client.h"

Client::Client(int id, float cash): id(id), cash(cash)
{
}

Client::~Client()
{
}


bool Client::choose_use_cash(){
    char opt{};
    do{
        cout << "Do you wish to use the balance on your account? (Y/N) ";
        opt=cin_check_letter();
        if(opt == 'Y'){
            return true;
        }
    }while(opt != 'N');
    
    
    return false;
}

char Client::cin_check_letter(){
    char option{};
    cin >> option;
    cin.ignore(1000,'\n');
    option = toupper(option);
    
    return option;
}