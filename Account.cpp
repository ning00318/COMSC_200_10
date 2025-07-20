#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double initialBalance)
    : balance(initialBalance)
{
    // Comment 1: Ensure the initial balance is >= 0.0, otherwise, reset the amount
    //            to 0.0 and print out an error message.
    if (balance < 0.0)
    {
        balance = 0.0;
        cout << "The initial balance was invalid." << endl;
    }
}

// Comment 2: Member function credit() adds an amount to the current balance.
void Account::credit(double addMoney)
{
    balance += addMoney;
}

// Comment 3: Member function debit() checks if the withdrawal amount is less than or equal to 
//            the current balance, if it is, deduct the amount, if not, the balance remains
//            unchanged and print out a message.
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

// Comment 4: Member function getBalance() returns the current balance without modification.
double Account::getBalance() const
{
    return balance;
}