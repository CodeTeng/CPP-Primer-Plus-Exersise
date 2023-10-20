#include <iostream>

double convert(double year)
{
    return year * 63240;
}

int main()
{
    double year;
    std::cout << "Enter the number of light years:";
    std::cin >> year;
    std::cout << year << " light years = " << convert(year) << " astronomical units\n";
    return 0;
}