#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strncpy(g.fullname, name, Len);
    g.fullname[Len - 1] = '\0';
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cout << "Please enter the fullname(enter quit): ";
    std::cin.getline(g.fullname, Len);
    if (0 == strcmp(g.fullname, "\0"))
    {
        return 0;
    }
    std::cout << "Please enter the handicap: ";
    while (!(std::cin >> g.handicap))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
        std::cout << "Please enter an number: ";
    }
    std::cin.get();
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}
