#include <iostream>

const int ArSize = 12;

int main()
{
    int sales[ArSize];
    const char *months[ArSize] = 
    {
        "January", "February","March", 
        "April", "May", "June", "July",
        "August","September", "October",
        "November", "December"
    };
    int sum = 0;
    for (int i = 0; i < ArSize; i++) {
        std::cout << "Please enter number of books sold (";
        std::cout << months[i] << "): ";
        std::cin >> sales[i];
    }
    for (int i = 0; i < ArSize; i++) {
        sum += sales[i];
    }
    std::cout << "A total of " << sum << " <<C++ For Fools>> books were sold in a year.\n";
    return 0;
}