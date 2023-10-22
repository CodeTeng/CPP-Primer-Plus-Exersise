#include <iostream>
#include "sales.h"

int main()
{
    using namespace SALES;
    double temp[4] = {1.0, 2.0, 3.0, 4.0};
    Sales objects[2] = {Sales(temp, 4), Sales()};
    
    std::cout << "The first object information:" << std::endl;
    objects[0].showSales();
    std::cout << "The second object information:" << std::endl;
    objects[1].showSales();
    std::cout << "Bye." << std::endl;
    return 0;
}