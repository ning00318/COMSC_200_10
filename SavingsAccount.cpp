#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double initialInterest)
    : Account(initialBalance), interestRate(initialInterest)
{

}

double SavingsAccount::calculateInterest() const
{
    return interestRate * Account::getBalance();
}