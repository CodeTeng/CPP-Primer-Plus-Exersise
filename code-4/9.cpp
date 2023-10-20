#include <iostream>

struct CandyBar
{
    char *kind;
    double weight;
    int calorie;
};

struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    } id_val;
};

int main()
{
    CandyBar *candybars = new CandyBar[3];
    candybars[0] = {(char *)"Mocha Munch", 2.3, 350};
    candybars[1] = {(char *)"Mooncake", 3.5, 369};
    candybars[2] = {(char *)"Birthdaycake", 6.8, 460};

    // int size = sizeof(candybars) / sizeof(candybars[0]); // 动态内存分配此时为0
    // std::cout << size;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "kind = " << candybars[i].kind << std::endl;
        std::cout << "weight = " << candybars[i].weight << std::endl;
        std::cout << "calorite = " << candybars[i].calorie << std::endl;
    }

    delete[] candybars;
    return 0;
}