#include <iostream>

void show_menu()
{
    std::cout << "Please enter one of the following choices:" << std::endl;
    std::cout << "c) carnivore           p) pianist" << std::endl;
    std::cout << "t) tree                g) game" << std::endl;
}

int main()
{
    show_menu();
    char ch;
    while (std::cin >> ch)
    {
        switch (ch)
        {
        case 'c':
            std::cout << "Pandas are also carnivores.\n";
            break;
        case 'p':
            std::cout << "Mozart is an excellent pianist.\n";
            break;
        case 't':
            std::cout << "A maple is a tree.\n";
            break;
        case 'g':
            std::cout << "Playing game can relax yourself.\n";
            break;
        default:
            std::cout << "Please enter a c, p, t, or g: ";
            break;
        }
        if ('c' == ch || 'p' == ch || 't' == ch || 'g' == ch)
        {
            break;
        }
    }
    return 0;
}