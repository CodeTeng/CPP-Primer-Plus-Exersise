#include <iostream>

int main()
{
    int age;
    std::cout << "Enter you age:";
    std::cin >> age;
    std::cout << age << " contains " << age * 12 << " months\n";
    return 0;
}