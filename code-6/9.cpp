#include <iostream>
#include <fstream>
#include <string>

const int HIGH_MONEY = 10000;

struct Person
{
    std::string name;
    double money;
};

int main()
{
    int number;
    std::string filename;
    std::ifstream ifs;
    unsigned int patrons = 0;
    unsigned int grandPatrons = 0;

    std::cout << "Please enter name of data file: ";
    std::getline(std::cin, filename);
    ifs.open(filename);
    if (!ifs.is_open())
    {
        std::cout << "Could not open the file " << filename << "\n";
        exit(EXIT_FAILURE);
    }
    (ifs >> number).get();
    Person *persons = new Person[number];
    for (int i = 0; i < number && ifs.good(); i++)
    {
        std::getline(ifs, persons[i].name);
        while ((ifs >> persons[i].money))
        {
            ifs.clear();
            while (ifs.get() != '\n')
            {
                continue;
            }
        }
        while (ifs.get() != '\n')
        {
            continue;
        }
    }
    ifs.close();
    for (int i = 0; i < number; i++)
    {
        HIGH_MONEY < persons[i].money ? ++grandPatrons : ++patrons; //条件运算符代替条件语句;
    }

    std::cout << "\nGrand Patrons:\n";
    if (grandPatrons != 0)
    {
        for (int i = 0; i < number; i++)
        {
            if (persons[i].money > HIGH_MONEY)
            {
                std::cout << "Name: " << persons[i].name << "\n";
                std::cout << "Money: " << persons[i].money << std::endl;
            }
        }
    }
    else
    {
        std::cout << "none\n";
    }

    std::cout << "\nPatrons:" << std::endl;
    if (patrons != 0)
    {
        for (int i = 0; i < number; i++)
        {
            if (persons[i].money < HIGH_MONEY)
            {
                std::cout << "Name: " << persons[i].name << "\n";
                std::cout << "Money: " << persons[i].money << std::endl;
            }
        }
    }
    else
    {
        std::cout << "none\n";
    }
    delete[] persons;
    return 0;
}