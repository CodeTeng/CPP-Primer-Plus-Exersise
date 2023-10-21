#include <iostream>

const int MAX_SIZE = 10;

double *Fill_array(double *begin, double *end)
{
    double *ptr = begin;
    double tmp;
    int i;
    for (i = 0; ptr < end; i++, ptr++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> tmp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (tmp < 0)
        {
            break;
        }
        *ptr = tmp;
    }
    return begin + i;
}

void Show_array(double *begin, double *end)
{
    for (double *it = begin; it != end; it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

void reValue(double *begin, double *end, double val)
{
    for (double *it = begin; it != end; it++)
    {
        *it *= val;
    }
}   

int main()
{
    double arr[MAX_SIZE];
    double *size = Fill_array(arr, arr + MAX_SIZE);
    if (size - arr > 0)
    {
        std::cout << "Enter revalution factor: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n') continue;
            std::cout << "Bad input, please enter a number: ";
        }
        reValue(arr, size, factor);
        Show_array(arr, size);
    }
    return 0;
}