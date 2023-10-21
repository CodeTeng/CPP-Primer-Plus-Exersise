#include <iostream>

const int MAX_SIZE = 10;

int initialize_array(double arr[], int n)
{
    int i = 0;
    std::cout << "You can enter up to " << MAX_SIZE;
    std::cout << " golf scores (q to terminate)." << std::endl;
    std::cout << "Golf scores #1: ";
    while (i < n && std::cin >> arr[i])
    {
        if (++i > MAX_SIZE)
        {
            std::cout << "Golf scores #" << i + 1 << ": ";
        }
    }
    return i;
}

void show_array(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void count_average(const double arr[], int n)
{
    double sum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = sum / n;
    std::cout << "avg = " << avg << "\n";
}

int main()
{
    double golfs[MAX_SIZE];

    int number = initialize_array(golfs, MAX_SIZE);
    show_array(golfs, number);
    count_average(golfs, number);
    return 0;
}