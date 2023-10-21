#include <iostream>

int main()
{
    int sum = 0, number;
    std::cout << "Please input a number(0 = break): ";
    while (std::cin >> number, number != 0) {
        sum += number;
        std::cout << "The sum = " << sum << std::endl;
    }
    return 0;
}