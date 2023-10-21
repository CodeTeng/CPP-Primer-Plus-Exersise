#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summber", "Fall", "Winter"}; 

void fill1(double arr[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> arr[i];
    }
}

void show1(double arr[])
{
    double total = 0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << arr[i] << std::endl;
        total += arr[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

struct Expenses
{
    double expenses[Seasons];
};

void fill2(Expenses *ex)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> ex->expenses[i];
    }
}

void show2(const Expenses ex)
{
    double total = 0;
    std::cout << "EXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << ex.expenses[i] << std::endl;
        total += ex.expenses[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

int main()
{
    // double expenses[Seasons];
    // fill1(expenses);
    // show1(expenses);
    Expenses ex;
    fill2(&ex);
    show2(ex);
    return 0;
}