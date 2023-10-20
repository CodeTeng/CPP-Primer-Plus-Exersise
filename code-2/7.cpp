#include <iostream>
#include <climits>  // 确定数据类型范围的头文件

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
    std::cout << INT_MAX << std::endl;
    return 0;
}