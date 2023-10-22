#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg()
{
    strcpy(name_, "Plorg");
    ci_ = 50;
}

Plorg::Plorg(int ci, const char *name)
{
    ci_ = ci;
    strncpy(name_, name, 19);
    name_[19] = '\0';
}

void Plorg::setCi(int ci)
{
    ci_ = ci;
}

void Plorg::show() const 
{
    std::cout << "name_ = " << name_ << "\n";
    std::cout << "ci_ = " << ci_ << "\n";
}