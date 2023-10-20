#include <iostream>
#include <array>

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo,
    ultraviolet
};

enum bigstep
{
    first,
    second = 100,
    third   // 101
};

int main()
{
    std::array<double,3 > scores;
    std::cout << "Please enter your the results of the first 40 meter race: ";
    std::cin >> scores[0];
    std::cout << "Please enter your the results of the second 40 meter race: ";
    std::cin >> scores[1];
    std::cout << "Please enter your the results of the third 40 meter race: ";
    std::cin >> scores[2];

    std::cout << "You ran three times in total.\n";
    std::cout << "Your average score is ";
    std::cout << (scores[0] + scores[1] + scores[2]) / 3.0;
    std::cout << "." << std::endl;

    spectrum band;
    band = blue;
    int color = green;  // 枚举类型 --> int类型
    // band = 3;   // 错误 

    return 0;
}