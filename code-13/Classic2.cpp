#include <iostream>
#include <cstring>
#include "Classic2.h"

Classic::Classic() : Cd()
{
    cdstr = new char[1];
    cdstr[0] = '\0';
}

Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    cdstr = new char[strlen(s) + 1];
    strcpy(cdstr, s);
}

Classic::Classic(const char *s, const Cd &d) : Cd(d)
{
    cdstr = new char[strlen(s) + 1];
    strcpy(cdstr, s);
}

Classic::~Classic()
{
    delete[] cdstr;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "cdstr = " << cdstr << "\n";
}

Classic &Classic::operator=(const Classic &cs)
{
    std::cout << "Classic::operator=(const Clssic &cs)" << "\n";
    if (this != &cs)
    {
        delete[] cdstr;
        Cd::operator=(cs);
        cdstr = new char[strlen(cs.cdstr) + 1];
        strcpy(cdstr, cs.cdstr);
    }
    return *this;
}

