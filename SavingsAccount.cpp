#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double initialInerest)
    : Account(initialBalance), interestRate(initialInerest)
{

}

double SavingsAccount::calculateInterest() const
{
    return interestRate * Account::getBalance();
}