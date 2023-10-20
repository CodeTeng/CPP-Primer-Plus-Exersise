#include <iostream>

const int convert_number = 12;

int main()
{
    int height;
    std::cout << "Please input youer height:";
    std::cin >> height;
    std::cout << "convert your height:" << double(height) / convert_number << std::endl;
    return 0;
}