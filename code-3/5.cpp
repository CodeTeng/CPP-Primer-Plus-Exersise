#include <iostream>

int main()
{
    long long totalPeople, countryPeople;
    std::cout << "Enter whe world's population:";
    std::cin >> totalPeople;
    std::cout << "Enter the population of the country:";
    std::cin >> countryPeople;
    std::cout << "The population of the country is " << double(countryPeople) / totalPeople * 100LL << " % of the world population\n";
    return 0;
}