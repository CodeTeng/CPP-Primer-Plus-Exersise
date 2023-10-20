#include <iostream>
#include <string>

int main()
{
    std::string firstName, lastName;
    int age;
    char grade;
    std::cout << "What is your first name? ";
    std::getline(std::cin, firstName);
    std::cout << "What is your last name? ";
    std::getline(std::cin, lastName);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << lastName + ", " + firstName << std::endl;
    std::cout << "Grade: " << ++grade << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}