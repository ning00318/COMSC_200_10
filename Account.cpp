#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double initialBalance)
    : balance(initialBalance)
{
    if (balance < 0.0)
    {
        balance = 0.0;
        cout << "The initial balance was invalid." << endl;
    }
}

void Account::credit(double addMoney)
{
    balance += addMoney;
}

bool Account::debit(double withdrawMoney)
{
    if (withdrawMoney <= balance)
    {
        balance -= withdrawMoney;
        return true;
    }
    else
    {
        cout << "Debit amount exceeded account balance." << endl;
        return false;
    }
}

double Account::getBalance() const
{
    return balance;
}