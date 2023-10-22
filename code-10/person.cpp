#include <string>
#include <cstring>
#include <iostream>
#include "person.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT - 1);
    fname[LIMIT - 1] = '\0';
}

void Person::show() const
{
    std::cout << "The name format is:\n";
    std::cout << fname << "(firstname), ";
    std::cout << lname << "(lastname).";
}

void Person::FormalShow() const
{
    std::cout << "The name format is:\n";
    std::cout << lname << "(lastname), \n";
    std::cout << fname << "(firstname).\n";
}