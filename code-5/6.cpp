#include <iostream>

const int ArYear = 3;
const int ArMonth = 12;

int show(int sales[][ArMonth], int year)
{
    int sum = 0;
    for (int i = 0; i < ArMonth; i++) {
        sum += sales[year][i];
    }
    return sum;
}

int main()
{
    const char *months[ArMonth] = {
        "January", "February","March", 
        "April", "May", "June", "July",
        "August","September", "October",
        "November", "December"
    };
    int sum, total, sales[ArYear][ArMonth];
    for (int i = 0; i < ArYear; i++) {
        std::cout << "Year " << i + 1 << ": " << std::endl;
        for (int j = 0; j < ArMonth; j++) {
            std::cout << "Please enter number of books sold (";
            std::cout << months[i] << "): ";
            std::cin >> sales[i][j];
        }
    }
    sum = total = show(sales, 0);
    std::cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the first year." << std::endl;
    total += sum = show(sales, 1);
    std::cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the second year." << std::endl;
    total += sum = show(sales, 2);
    std::cout << "A total of " << sum << " <<C++ For Fools>> books were sold in the third year." << std::endl;
    std::cout << "A total of " << total << " <<C++ For Fools>> books were sold in three years." << std::endl;
    return 0;
}