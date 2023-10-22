#include <iostream>
#include <string>
#include "bankAccount.h"

BankAccount::BankAccount(const std::string &client, const std::string &num, double balance)
{
    name_ = client;
    acctnum_ = num;
    balance_ = balance;
}

void BankAccount::show() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Acctnum: " << acctnum_ << std::endl;
    std::cout << "Balance: " << balance_ << std::endl;
}

void BankAccount::deposit(double cash)
{
    if (cash <= 0) //存款数额不能小于0;
    {
        std::cout << "Your deposit amount can't be less than 0!\n";
        return;
    }
    balance_ += cash;
    std::cout << "You deposit $" << cash << " successfully.\n";
}

void BankAccount::withdraw(double cash)
{
    if (balance_ < cash)
    {
        std::cout << "You can't withdraw more than your deposit!\n";
        return;
    } 
    else if (cash <= 0)
    {
        std::cout << "Your withdrawal amount can't be less than 0!\n";
        return;
    }
    balance_ -= cash;
    std::cout << "You withdraw $" << cash << " successfully.\n";
}