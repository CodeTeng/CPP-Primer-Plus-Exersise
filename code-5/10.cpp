#include <iostream>

int main()
{
    int rows;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i + j > rows) {
                std::cout << '*';
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}