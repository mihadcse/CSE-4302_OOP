#pragma once
#include <iostream>
#include "account.h"

class Sav_acc : public Account
{
public:
    Sav_acc();
    ~Sav_acc();

    void deposit(double amount);
    void withdraw(double amount);
}; 