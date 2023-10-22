#include <iostream>
#include <algorithm>

template <typename T>
T max5(T arr[5])
{
    std::sort(arr, arr + 5);
    return arr[4];
}

int main()
{
    int arr1[5] = {3, 5, 1, 9, 4};
    std::cout << max5<int>(arr1) << "\n";
    double arr2[5] = {2.0, 3.4, 5.7, 9.8, 2.2};
    std::cout << max5<double>(arr2) << "\n";
    return 0;
}