#include <iostream>

void show1(int n)
{
    for (int i = 0; i < n; i++) {
        std::cout << "Three blind mice\n";
    }
}

void show2(int n)
{
    for (int i = 0; i < n; i++) {
        std::cout << "See how they run\n";
    }
}

int main()
{
    show1(2);
    show2(2);
    return 0;
}