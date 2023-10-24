#include "winec.h"

Wine::Wine(const char *l, int y)
{
    wine_name = l;
    year = y;
    year_and_bottle.Set(ArrayInt(y), ArrayInt(y));
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    wine_name = l;
    year = y;
    year_and_bottle.Set(ArrayInt(yr, y), ArrayInt(bot, y));
}

void Wine::GetBottles()
{
    ArrayInt yr(year);
    ArrayInt bt(year);

    std::cout << "Enter " << wine_name;
    std::cout << " data for " << year << " year(s):\n";
    for (int i = 0; i < year; i++)
    {
        std::cout << "Enter year: ";
        std::cin >> yr[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> bt[i];
    }
    year_and_bottle.Set(yr, bt);
}

std::string &Wine::Label()
{
    return wine_name;
}

int Wine::sum() const
{
    return year_and_bottle.Sum();
}

void Wine::Show() const
{
    std::cout << "Wine: " << wine_name << std::endl;
    std::cout << "\tYear\tBottles" << std::endl;
    year_and_bottle.Show(year);
}
