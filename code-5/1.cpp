#include <iostream>

int main()
{
    int start, end;
    std::cout << "Please input two numbers\n";
    std::cout << "input first number: ";
    std::cin >> start;
    std::cout << "input second number: ";
    std::cin >> end;
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    std::cout << "The sum = " << sum << std::endl;
    return 0;
}