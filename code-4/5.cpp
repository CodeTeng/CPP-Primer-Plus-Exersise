#include <iostream>

struct CandyBar
{
    char *kind;
    double weight;
    int calorie;
};


int main()
{
    CandyBar snck = {(char *)"Mocha Munch", 2.3, 350};
    std::cout << "kind = " << snck.kind << std::endl;
    std::cout << "weight = " << snck.weight << std::endl;
    std::cout << "calorie = " << snck.calorie << std::endl;
    return 0;
}