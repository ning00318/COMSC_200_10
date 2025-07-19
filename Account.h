#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    Account(double initialBalance);
    void credit(double addMoney);
    void debit(double withdrawMoney);
    double getBalance() const;
private:
    double balance;
};

#endif