#include <iostream>
#include <cstring>
#include "Classic1.h"

Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strncpy(cdstr, s, 49);
    cdstr[49] = '\0';
}

Classic::Classic(const char *s, const Cd &d) : Cd(d)
{
    strncpy(cdstr, s, 49);
    cdstr[49] = '\0';
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "cdstr = " << cdstr << "\n";
}

Classic &Classic::operator=(const Classic &cs)
{
    if (this != &cs)
    {
        Cd::operator=(cs);
        strcpy(cdstr, cs.cdstr);
    }
    return *this;
}