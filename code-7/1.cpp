#include <iostream>

double avg(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

int main()
{    
    double x, y;
    while (std::cin >> x >> y, x != 0 && y != 0)
    {
        double res = avg(x, y);
        std::cout << "res = " << res << std::endl;
    }
    return 0;
}