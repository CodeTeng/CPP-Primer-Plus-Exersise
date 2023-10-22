#include <iostream>
#include <cstring>
#include <new>

const int BUF = 512;
static char buffer[BUF];
struct chaff
{
    char dross[20];
    int slag;
};

int main()
{   
    char temp[20];
    chaff *str = new (buffer) chaff[2];
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter the content of dross #" << i + 1 << ": ";
        std::cin.getline(temp, 20);
        strcpy(str[i].dross, temp);
        std::cout << "Enter the content of slag #" << i + 1 << ": ";
        while (!(std::cin >> str[i].slag))
        {
            std::cin.clear();
            while (std::cin.get() != '\n') continue;
            std::cout << "Please enter a number";
        }
        std::cin.get();
    }
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Chaff #" << i + 1 << ": " << std::endl;
        std::cout << "Dross: " << str[i].dross << std::endl;
        std::cout << "Slag: " << str[i].slag << std::endl;
    }
    return 0;
}