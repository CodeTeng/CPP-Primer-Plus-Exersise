#include <iostream>

void func(const char *str, int number = 0)
{
    std::cout << str << "\n";
}

int main()
{
    const char *str = "Hello World!";
    func(str);
    func(str, 3);
    return 0;
}