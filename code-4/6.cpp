#include <iostream>

struct CandyBar
{
    char *kind;
    double weight;
    int calorie;
};

int main()
{
    CandyBar candybars[3] = {
        {(char *)"Mocha Munch", 2.3, 350},
        {(char *)"Mooncake", 3.5, 369},
        {(char *)"Birthdaycake", 6.8, 460}
    };
    int size = sizeof(candybars) / sizeof(candybars[0]);
    for (int i = 0; i < size; i++) {
        std::cout << "kind = " << candybars[i].kind << std::endl;
        std::cout << "weight = " << candybars[i].weight << std::endl;
        std::cout << "calorite = " << candybars[i].calorie << std::endl;
    }
    return 0;
}