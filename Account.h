#ifndef ACCOUNT_H
#define ACCOUNT_H

// Base class
class Account
{
public:
    Account(double initialBalance);
    void credit(double addMoney);
    bool debit(double withdrawMoney);
    double getBalance() const;
private:
    double balance;
};

#endif