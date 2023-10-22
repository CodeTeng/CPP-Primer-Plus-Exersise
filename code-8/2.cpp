#include <iostream>
#include <cstring>

struct CandyBar
{
    char brand[20];
    double weight;
    int heat;
};

void func(CandyBar &candyBar, const char *brand = "Millennium Munch", const double weight = 2.85, const int heat = 350)
{
    strcpy(candyBar.brand, brand);
    candyBar.weight = weight;
    candyBar.heat = heat;
}

void show(const CandyBar &candyBar)
{
    std::cout << "brand = " << candyBar.brand << "\n";
    std::cout << "weight = " << candyBar.weight << "\n";
    std::cout << "heat = " << candyBar.heat << "\n";
}

int main()
{
    CandyBar candyBar;
    func(candyBar);
    show(candyBar);
    return 0;
}