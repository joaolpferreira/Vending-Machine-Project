#include <iostream>

#include "src/classes/Vending_Machine.h"
#include "src/classes/Basket.h"
#include "src/classes/Item.h"
#include <iomanip>

using namespace std;


int main(){
    cout << fixed << setprecision(2);
    char opt1 {};
    Clients_List *clients = new Clients_List();
    
    do {
        Vending_Machine vending_machine = Vending_Machine(clients);
        opt1 = vending_machine.entry();
        if(opt1=='Y'){
            vending_machine.new_shopping();
            cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n" << endl;
            
        }
        
    } while(true);
    
    return 0;
} 

