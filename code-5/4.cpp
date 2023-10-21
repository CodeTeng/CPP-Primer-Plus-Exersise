#include <iostream>

const double daphneInterest = 0.1;
const double cleoInterset = 0.05;

int main()
{
    double daphneMoney = 100, cleoMoney = 100;
    int year = 0;
    while (cleoMoney <= daphneMoney) {
        year++;
        daphneMoney += 10;
        cleoMoney += cleoMoney * 0.05;
    }
    std::cout << "year = " << year << std::endl;
    std::cout << "daphneMoney = " << daphneMoney << std::endl;
    std::cout << "cleoMoney = " << cleoMoney << std::endl;
    return 0;
}