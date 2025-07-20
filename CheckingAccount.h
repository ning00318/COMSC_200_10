#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"

// Derived class
class CheckingAccount : public Account
{
public:
    CheckingAccount(double initialBalance, double fee);
    void credit(double addMoney);
    void debit(double withdrawMoney);
private:
    double transactionFee;
};

#endif