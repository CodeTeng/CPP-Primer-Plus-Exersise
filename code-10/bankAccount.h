#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
#include <string>

class BankAccount
{
private:
    std::string name_;
    std::string acctnum_;
    double balance_;
public:
    BankAccount() = default;
    BankAccount(const std::string &client, const std::string &num, double balance = 0.0);
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
    ~BankAccount() = default;
};

#endif