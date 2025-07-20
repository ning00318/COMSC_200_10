#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{
public:
    SavingsAccount(double initialBalance, double initialInterest);
    double calculateInterest() const;
private:
    double interestRate;
};

#endif