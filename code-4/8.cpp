#include <iostream>

struct Pizza
{
    char *name;
    double diameter;
    double weight;
};

int main()
{
    Pizza *snack = new Pizza;
    snack->name = new char[20];
    std::cout << "Please enter the name of the Pizza Company: ";
    std::cin.getline(snack->name, 20);
    std::cout << "Please enter the diameter of the pizza: ";
    std::cin >> snack->diameter;
    std::cout << "Please enter the weight of the pizza: ";
    std::cin >> snack->weight;

    std::cout << "The name of the Pizza Company: " << snack->name << std::endl;
    std::cout << "The diameter of the Pizza Company: " << snack->diameter << std::endl;
    std::cout << "The weight of the Pizza Company: " << snack->weight << std::endl;

    delete[] snack->name;
    delete snack;
    return 0;
}