#include <iostream>
#include "SavingsAccount.h"
using namespace std;

// Comment 5: Savings account inherits from the Account class, and has an additional
//            interest rate to calculate. When people create a savings account,
//            the initial balance will invoke the Account class to execute.
SavingsAccount::SavingsAccount(double initialBalance, double initialInterest)
    : Account(initialBalance), interestRate(initialInterest)
{
}

// Comment 6: Then we can get the balance from the class Account through getBalance()
//            and multiply by the interest rate to calculate the amount of interest.
double SavingsAccount::calculateInterest() const
{
    return interestRate * Account::getBalance();
}