#include <iostream>
#include <string>

struct Car
{
    std::string brand;
    int year;
};

int main()
{
    int number;
    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> number).get();
    Car *cars = new Car[number];
    for (int i = 0; i < number; i++) {
        std::cout << "Car #" << i + 1 << ":\n";
        std::cout << "Please enter the make: ";
        std::getline(std::cin, cars[i].brand);
        std::cout << "Please enter the year made: ";
        (std::cin >> cars[i].year).get();
    }
    std::cout << "Here is your collection:\n";
    for (int i = 0; i < number; i++) {
        std::cout << cars[i].year << " " << cars[i].brand << std::endl;
    }
    delete[] cars;
    return 0;
}