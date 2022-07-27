#include "Clients_List.h"
#include <ctime>
#include <cstdlib>
#include <cmath>

Clients_List::Clients_List()
{
    generate_clients();
}

Clients_List::~Clients_List()
{
}


void Clients_List::generate_clients(){
    srand(time(0));
    Client* new_client;
    for(int i=0; i<10; i++){
        
        int rand_id = 100000 + rand()% (999999-100000+1);
        int rand_cash = rand() % 25;
        if(i%2==0){
            rand_cash=0;
        }
        //cout << rand_cash << ">Cashy" << endl;
        new_client= new Client(rand_id, rand_cash);
        clients.push_back(new_client);
    }
}

bool Clients_List::use_client(){
    char opt{};
    do{
        cout << "Do you have a client account? (Y/N) ";
        opt=cin_check_letter();
        if(opt == 'Y'){
            return true;
        }
    }while(opt != 'N');
    
    
    return false;
    
}

void Clients_List::print_clients(){
    for(auto cli: clients){
        cout << "\t\t\t\t\t\t\tClient ID: " << cli->id << "\n\t\t\t\t\t\t\tClient Cash: " << cli->cash << endl;
    }
}

bool Clients_List::find_client_id(int *client_id){
    cout << "Please enter your client id: ";
    cin >> *client_id;
    cin_check_number();
    for(auto cli: clients){
        if(cli->id == *client_id){
            cout << "Client found" << endl;
            return true;
        }
    }
    cout << "Client not found" << endl;
    return false;
}

char Clients_List::cin_check_letter(){
    char option{};
    cin >> option;
    cin.ignore(1000,'\n');
    option = toupper(option);
    
    return option;
}

void Clients_List::cin_check_number(){
    if(cin.fail()) {
        cin.clear();
    }
    cin.ignore(1000,'\n');
}

Client* Clients_List::get_client(int *client_id){
    for(auto cli: clients){
        if(cli->id == *client_id){
            return cli;
        }
    }
    return new Client(123456,0);
}

void Clients_List::update_cash(int *client_id, float pay_amount){
    int i=0; 
    for(auto cli: clients){
        if(cli->id == *client_id){
            if(pay_amount > 0){
                clients.at(i)->cash += pay_amount*.1;
            }
            else if(pay_amount < 0){
                clients.at(i)->cash += pay_amount;
            }
            else if(pay_amount == 0.00){
                clients.at(i)->cash = 0.00;
            }
            
        }
        i++;
    }
    
    
}