#include "emp.h"

void abstr_emp::ShowAll() const
{
    std::cout << "fname = " << fname << " lanem = " << lname << "\n";
    std::cout << "job = " << job << "\n";
}

void abstr_emp::SetAll()
{
    std::cout << "Please enter your firstname: ";
    getline(std::cin, fname);
    std::cout << "Please enter your lastname: ";
    getline(std::cin, lname);
    std::cout << "Please enter your job: ";
    getline(std::cin, job);
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << "fname = " << e.fname << " lname = " << e.lname << "\n";
    os << "job = " << e.job << "\n";
    return os;
}

abstr_emp::~abstr_emp() {}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "In charge of: " << inchargeof << "\n";
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Please enter a number for inchargerof: ";
    std::cin >> inchargeof;
    while (std::cin.get() != '\n')
        continue;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Reports to: " << reportsto << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Please enter a string for reportsto: ";
    getline(std::cin, reportsto);
}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "In charge of: " << manager::InChargeOf() << std::endl;
    std::cout << "Reports to: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Please enter a number for inchargerof: ";
    std::cin >> InChargeOf();
    while (std::cin.get() != '\n')
        continue;
    std::cout << "Please enter a string for reportsto: ";
    getline(std::cin, ReportsTo());
}