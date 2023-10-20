#include <iostream>

void func(int hour, int minute)
{
    std::cout << "Time:" << hour << ":" << minute << std::endl;
}

int main()
{
    int hour, minute;
    std::cout << "Tnter the number of hours:";
    std::cin >> hour;
    std::cout << "Enter the number of minutes:";
    std::cin >> minute;
    func(hour, minute);
    return 0;
}