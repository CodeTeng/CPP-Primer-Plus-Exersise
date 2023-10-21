#include <iostream>

double add(double x, double y)
{
    return x + y;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double calculate(double x, double y, double (*fp)(double, double))
{
    return fp(x, y);
}

int main()
{
    double a, b;
    // 指针数组
    double (*pf[3])(double, double) = {add, subtract, multiply};
    std::cout << "Enter two numbers (q to quit): ";
    while (std::cin >> a >> b)
    {
        for (int i = 0; i < 3; i++)
        {
            switch (i)
            {
            case 0:
            {
                std::cout << "The " << a << " + " << b << " answer is: " << (*pf[i])(a, b) << "\n";
            }
            break;
            case 1:
            {
                std::cout << "The " << a << " - " << b << " answer is " << (*pf[i])(a, b) << "\n";
            }
            break;
            case 2:
            {
                std::cout << "The " << a << " * " << b << " answer is " << (*pf[i])(a, b) << "\n";
            }
            break;
            }
        }
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout << "Done!\n";
    return 0;
}