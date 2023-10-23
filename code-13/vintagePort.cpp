#include <iostream>
#include <cstring>
#include "vintagePort.h"

VintagePort::VintagePort() : Port()
{
    nickname = new char[1];
    nickname[0] = '\0';
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "vintage", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this != &vp)
    {
        delete[] nickname;
        Port::operator=(vp);
        nickname = new char[strlen(vp.nickname) + 1];
        strcpy(nickname, vp.nickname);
        year = vp.year;
    }
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "nickname = " << nickname << "\n";
    std::cout << "year = " << year << "\n";
}

std::ostream &operator<<(std::ostream &os, const VintagePort &vp)
{
    os << (const Port &) vp;
    os << "nickname = " << vp.nickname << "\n";
    os << "year = " << vp.year << "\n";
    return os;
}