#include <iostream>
#include "CheckingAccount.h"
using namespace std;

// Comment 7: Checking account inherits from the base class, Account, and additionally,
//            checking account includes a fee charged for each transaction.
CheckingAccount::CheckingAccount(double initialBalance, double fee)
    : Account(initialBalance), transactionFee(fee)
{
}

// Comment 8: When adding an amount, we invoke credit() from the class Account, and
//            charge the transaction fee by calling debit(). After finishing adding
//            value, print out a message to display how much the fee was charged.
void CheckingAccount::credit(double addMoney)
{
    Account::credit(addMoney);
    Account::debit(transactionFee);
    cout << "$" << transactionFee << " transaction fee charged." << endl;
}

// Comment 9: When withdraw an amount, we invoke debit() from the class Account to
//            check if the request value is reasonable.
void CheckingAccount::debit(double withdrawMoney)
{
    // Comment 10: If it returns true, it means the money was withdrawn successfully, and then it
    //             will charge the transaction fee and print out a message. Otherwise, nothing happens.
    if (Account::debit(withdrawMoney))
    {
        Account::debit(transactionFee);
        cout << "$" << transactionFee << " transaction fee charged." << endl;
    }
}