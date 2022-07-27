#ifndef CLIENTS_LIST_H
#define CLIENTS_LIST_H

#include "Client.h"
#include <vector>

class Clients_List
{
public:
    Clients_List();
    ~Clients_List();
    
    vector <Client*> clients;
    
  
    bool use_client();
    void generate_clients();
    void print_clients();
    
    bool find_client_id(int *client_id);
    
    Client* get_client(int *client_id);
    void update_cash(int *client_id, float pay_amount);
    
    char cin_check_letter();
    void cin_check_number();
};

#endif // CLIENTS_LIST_H
