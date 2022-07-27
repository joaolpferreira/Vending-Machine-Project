#ifndef CLIENT_H
#define CLIENT_H

#include "Basket.h"

class Client
{
public:
    Client(int id, float cash);
    ~Client();
    
    int id;
    float cash;
    
    bool choose_use_cash();
    
    char cin_check_letter();
    
};

#endif // CLIENT_H
