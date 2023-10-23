#include <iostream>
#include <cstring>
#include "port.h"

Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strncpy(style, st, 19);
    style[19] = '\0';
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, 19);
    style[19] = '\0';
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{
    if (this != &p)
    {
        delete[] brand;
        brand = new char[strlen(p.brand) + 1];
        strcpy(brand, p.brand);
        strncpy(style, p.style, 19);
        style[19] = '\0';
        bottles = p.bottles;
    }
    return *this;
}

Port &Port::operator+=(int b)
{
    this->bottles += b;
    return *this;
}

Port &Port::operator-=(int b)
{
    this->bottles -= b;
    return *this;
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << "\n";
    std::cout << "Kind: " << style << "\n";
    std::cout << "Bottles: " << bottles << "\n";
}

std::ostream &operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles << "\n";
    return os; 
}
