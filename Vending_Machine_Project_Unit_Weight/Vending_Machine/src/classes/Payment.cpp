#include "Payment.h"

Payment::Payment()
{

}

Payment::~Payment()
{
}



void Payment::cin_check_number(){
    if(cin.fail()) {
        cin.clear();
    }
    cin.ignore(1000,'\n');
}

bool Payment::make_payment(){
    cout << "\nPayment successful!" << endl;
    if(!with_card()){
        cout << "Change is: " << change_cash  << endl;
    }
    return true;
}

bool Payment::make_payment_client(Client *client, Clients_List *clients_list, Basket *basket, int *client_id){
    if(client->choose_use_cash()){
        if(client->cash < 0.01){
            cout << "Sorry, you don't own any cash in your client account\n" << endl;
            total_amount = basket->get_total_amount();
            if(make_payment()){
                clients_list->update_cash(client_id, total_amount);
                return true;
            }
        }
        else if(client->cash > basket->get_total_amount()){
            total_amount = 0;
            if(make_payment()){
                clients_list->update_cash(client_id, -basket->get_total_amount());
                return true;
            }
        }
        else{
            cout << "Your discount is: " << client->cash << endl;
            cout << endl;
            total_amount = basket->get_total_amount()-client->cash;
            if(make_payment()){
                clients_list->update_cash(client_id, 0.00);
                return true;
            }
        }
    }
    else{
        total_amount = basket->get_total_amount();
        if(make_payment()){
            clients_list->update_cash(client_id, total_amount);
            return true;
        }
    }   
    return false;
}