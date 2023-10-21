#include <iostream>

struct Person
{
    std::string name;
    double money;
};

int main()
{
    int number;
    std::cout << "Please input person number: ";
    std::cin >> number;
    Person *persons = new Person[number];
    int grandPatronsNumber = 0, patronsNumber = 0;

    for (int i = 0; i < number; i++) {
        std::cout << "input name: ";
        std::cin >> persons[i].name;
        std::cout << "input money: ";
        std::cin >> persons[i].money;
        if (persons[i].money > 10000) {
            grandPatronsNumber++;
        } else {
            patronsNumber++;
        }
    }

    for (int i = 0; i < number; i++) {
        std::string name = persons[i].name;
        double money = persons[i].money;
        if (grandPatronsNumber > 0) {
            std::cout << "Grand Patrons\n";
            std::cout << name << " " << money << "\n";
        } else {
            std::cout << "none\n";
        }
        if (patronsNumber > 0) {
            std::cout << "Patrons\n";
            std::cout << name << "\n";
        } else {
            std::cout << "none\n";
        }
    }
    return 0;
}