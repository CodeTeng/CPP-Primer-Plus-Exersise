#include <iostream>
#include <string>

int main()
{
    const int ArSize = 20;
    std::string name, dessert;

    std::cout << "Enter your name:\n";
    std::getline(std::cin, name);
    std::cout << "Enter your favorite dessert:\n";
    std::getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << " .\n";
    return 0;
}