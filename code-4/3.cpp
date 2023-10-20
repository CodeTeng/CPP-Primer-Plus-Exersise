#include <iostream>
#include <cstring>

int main()
{
    int size = 20;
    char firstName[20], lastName[20];
    std::cout << "Enter your first name:";
    std::cin.getline(firstName, size);
    std::cout << "Enter your last name:";
    std::cin.getline(lastName, size);
    // 考虑中间和末尾为空
    char *name = new char[strlen(firstName) + strlen(lastName) + 5];
    strcpy(name, lastName);
    strcat(name, ", ");
    strcat(name, firstName);
    std::cout << "Here's the information in a single string: ";
    std::cout << name << std::endl;
    delete[] name;
    return 0;
}