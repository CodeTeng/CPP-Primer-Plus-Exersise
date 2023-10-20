#include <iostream>

int main()
{
    double kilometer, liter;
    std::cout << "Please enter your driving distance(km): ";
    std::cin >> kilometer;
    std::cout << "Please enter your gas consumption(liter): ";
    std::cin >> liter;
    std::cout << "You consume " << liter / kilometer * 100;
    std::cout << " liter gas for driving per 100 km.\n";
    return 0;
}