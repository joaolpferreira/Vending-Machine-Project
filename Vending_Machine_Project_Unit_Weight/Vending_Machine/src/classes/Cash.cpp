#include "Cash.h"

Cash::Cash()
{
}

Cash::~Cash()
{
}

bool Cash::make_payment(){
    if(total_amount < 0.01){
        return true;
    }
    double amount_entered {0};
    double missing_money {total_amount};
    cout << "\n-----------------------"<< endl;
    cout << "If you wish to cancel the payment please enter -1" << endl;
    do{
        cout << "Please enter " << missing_money << endl;
        cin >> amount_entered;
        cin_check_number();
        missing_money = missing_money-amount_entered;
    } while((amount_entered != -1) && (missing_money > 0.0));
    if(missing_money<=0){
        change_cash = -missing_money;
        Payment::make_payment();
        return true;
    }
    return false;
}

bool Cash::with_card(){
    return false;
}

long int Cash::get_card_number(){
    return 0;
}