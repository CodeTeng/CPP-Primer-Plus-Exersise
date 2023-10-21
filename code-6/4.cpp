#include <iostream>

const int NUM = 5;
const int strsize = 20;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

void show_menu()
{
    std::cout << "Benevolent Order of Programmers Report" << std::endl;
    std::cout << "a. display by name     b. display by title" << std::endl;
    std::cout << "c. display by bopname  d. display by preference" << std::endl;
    std::cout << "q. quit" << std::endl;
}

int main()
{
    char ch;
    bop people[NUM] = 
    {
        {"Wimp Macho", "Teacher", "WMA", 0},
        {"Raki Rhodes", "Junior Programmer", "RHES", 1},
        {"Celia Laiter", "Professor", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HPAN", 1},
        {"Pat Hand", "Animal Keeper", "LOOPY", 2}
    };
    show_menu();
    std::cout << "Enter your choice: ";
    while (std::cin >> ch && ch != 'q') {
        switch (ch)
        {
        case 'a': {
            for (int i = 0; i < NUM; i++) {
                std::cout << people[i].fullname << "\n";
            }
        } break;
        case 'b': {
            for (int i = 0; i < NUM; i++) {
                std::cout << people[i].title << "\n";
            }
        } break;
        case 'c': {
            for (int i = 0; i < NUM; i++) {
                std::cout << people[i].bopname << "\n";
            }
        } break;
        case 'd': {
            for (int i = 0; i < NUM; i++) {
                switch (people[i].preference)
                {
                case 0:
                    std::cout << people[i].fullname << "\n";
                    break;
                case 1:
                    std::cout << people[i].title << "\n";
                    break;
                case 2:
                    std::cout << people[i].bopname << "\n";
                    break;
                default:
                    break;
                }
            }
        } break;
        default:
            std::cout << "Illegal input!\n";
            break;
        }
        std::cout << "Next Choice: ";
    }
    std::cout << "Bye!\n";
    return 0;
}