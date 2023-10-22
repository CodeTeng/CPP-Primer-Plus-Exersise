#include <iostream>
#include "sales.h"

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double total = ar[0], maxv = ar[0], minv = ar[0];
        for (int i = 1; i < n; i++)
        {
            s.sales[i] = ar[i];
            total += ar[i];
            maxv = std::max(ar[i], maxv);
            minv = std::min(ar[i], minv);
        }
        s.min = minv, s.max = maxv, s.average = total / n;
    }

    void setSales(Sales &s)
    {
        int len;
        std::cout << "Enter the length of sales(<= 4 and > 0): ";
        while (!(std::cin >> len) || len > 4 || len <= 0) 
        {
            std::cin.clear();
            while (std::cin.get() != '\n') continue;
            std::cout << "Please enter a number(<= 4 and > 0)";
        }
        double *tmp = new double[len];
        std::cout << "Please enter the sales: " << std::endl;
        for (int i = 0; i < len; i++)
        {
            std::cout << "Please enter the content #" << i + 1 << ": ";
            while (!(std::cin >> tmp[i]))
            {
                std::cin.clear();
                while (std::cin.get() != '\n') continue;
                std::cout << "Please enter a number";
            }
        }
        setSales(s, tmp, len);
        delete[] tmp;
    }

    void showSales(const Sales &s)
    {
        std::cout << "Sales average: " << s.average << std::endl;
        std::cout << "Sales max: " << s.max << std::endl;
        std::cout << "Sales min: " << s.min << std::endl;
    }
}