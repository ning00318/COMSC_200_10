#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double fee)
    : Account(initialBalance), transactionFee(fee)
{

}

void CheckingAccount::credit(double addMoney)
{
    Account::credit(addMoney);
    Account::debit(transactionFee);
    cout << "$" << transactionFee << " transaction fee charged." << endl;
}

void CheckingAccount::debit(double withdrawMoney)
{
    if (Account::debit(withdrawMoney))
    {
        Account::debit(transactionFee);
        cout << "$" << transactionFee << " transaction fee charged." << endl;
    }
}