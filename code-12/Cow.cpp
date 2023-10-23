#include <iostream>
#include <cstring>
#include "Cow.h"

Cow::Cow()
{
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strncpy(name, nm, 19);
    name[19] = '\0';
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    if (hobby != nullptr)
    {
        delete[] hobby;
        hobby = nullptr;
    }
    memset(name, 0, sizeof(name));
    weight = 0.0;
}

Cow &Cow::operator=(const Cow &c)
{
    std::cout << "operator=(const Cow &c)\n";
    if (this != &c)
    {
        delete[] hobby;
        memset(name, 0, sizeof(name));
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
        strcpy(name, c.name);
        weight = c.weight;
        return *this;
    }
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "name = " << name << " hobby = " << hobby << " weight = " << weight << "\n";
}
