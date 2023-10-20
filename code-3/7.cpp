#include <iostream>

const double MILE_PRE_KM = 0.6214;  // 1公里0.6214英里
const double LITER_PRE_GALLON = 3.875; // 1加仑3，875升

int main()
{
    double kilomter, liter;
    std::cout << "Please enter your driving distance(km):";
    std::cin >> kilomter;
    std::cout << "Please enter your gas consumption(liter):";
    std::cin >> liter;

    std::cout << "Your consume " << liter / kilomter * 100;
    std::cout << " liter gas for driving per 100 km (European style).\n";
    std::cout << "Your drive " << kilomter * MILE_PRE_KM / liter * LITER_PRE_GALLON;
    std::cout << " miles for per gallon (American style).\n";
    return 0;
}