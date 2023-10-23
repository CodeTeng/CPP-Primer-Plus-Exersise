#include <iostream>
#include <cstring>
#include "Cd1.h"

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    strncpy(performers, s1, 49);
    performers[49] = '\0';
    strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

void Cd::Report() const
{
    std::cout << "performers = " << performers << " label = " << label << "\n";
    std::cout << "selections = " << selections << " playtime = " << playtime << "\n"; 
}

Cd& Cd::operator=(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}