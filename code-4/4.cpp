#include <iostream>
#include <string>

int main()
{
    std::string firstName, lastName;
    std::cout << "Enter your first name:";
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name:";
    std::getline(std::cin, lastName);
    std::string name = lastName + ", " + firstName;
    std::cout << "Here's the information in a single string: ";
    std::cout << name << std::endl;
    return 0;
}