#include <iostream>
#include "golf.h"

int main()
{
    int sum = 0;
    golf andy[Len];

    setgolf(andy[0], "Ann Birdfree", 24);
    std::cout << "Starting output:" << std::endl;
    showgolf(andy[0]);

    handicap(andy[0], 666);
    std::cout << "Changing handicap:" << std::endl;
    showgolf(andy[0]);

    for (int i = 0; i < Len; i++)
    {
        std::cout << "Please enter andy #" << i + 1 << ": " << std::endl;
        if (0 == setgolf(andy[i]))
        {
            break;
        }
        ++sum;
    }
    if (sum > 0)
    {
        std::cout << "Ending output:" << std::endl;
    }
    for (int i = 0; i < sum; i++)
    {
        showgolf(andy[i]);
    }
    std::cout << "Bye." << std::endl;
    return 0;
}