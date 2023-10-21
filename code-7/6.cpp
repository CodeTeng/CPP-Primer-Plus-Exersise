#include <iostream>

const int MAX_SIZE = 10;

int Fill_array(double arr[], int size)
{
    int count = 0;
    std::cout << "You can enter up to " << MAX_SIZE;
    std::cout << " numbers (q to exit).\n";
    std::cout << "Number #1: ";
    while (count < size && std::cin >> arr[count]) {
        if (++count < MAX_SIZE) {
            std::cout << "Number #" << count + 1 << ": ";
        }
    }
    return count;
}

void Show_array(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void Reverse_array(double arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        std::swap(arr[i], arr[size - i - 1]);
    }
}

int main()
{
    double arr[MAX_SIZE];

    int number = Fill_array(arr, MAX_SIZE);
    Show_array(arr, number);
    Reverse_array(arr, number);
    Show_array(arr, number);
    Reverse_array(arr + 1, number - 2);
    Show_array(arr, number);
    return 0;
}