#include "winec2.h"

Wine::Wine(const char *l, int y) : std::string(l)
{
    PairArray::operator=(PairArray(ArrayInt(y), ArrayInt(y))); //使用隐式赋值运算符调用私有对象构造函数进行初始化;
    year = y;
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l)
{
    PairArray::operator=(PairArray(ArrayInt(yr, y), ArrayInt(bot, y))); //使用隐式赋值运算符调用私有对象构造函数进行初始化;
    year = y;
}

Wine::~Wine()
{
}

void Wine::GetBottles()
{
    ArrayInt yr(year);
    ArrayInt bt(year);

    std::cout << "Enter " << (const std::string &)*this;
    std::cout << " data for " << year << " year(s):" << std::endl;
    for (int i = 0; i < year; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> yr[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> bt[i];
    }
    PairArray::operator=(PairArray(yr, bt));
}

std::string &Wine::Label()
{
    return (std::string &)*this; //使用强制类型转换访问私有对象;
}

int Wine::sum() const
{
    return PairArray::Sum();
}

void Wine::Show() const
{
    std::cout << "Wine: " << (const std::string &)(*this) << std::endl;
    std::cout << "\tYear\tBottles" << std::endl;
    PairArray::Show(year);
}