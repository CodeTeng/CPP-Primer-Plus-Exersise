#include <iostream>
#include <algorithm>
#include <cstring>

template <typename T>
T maxn(T arr[], int number)
{
    std::sort(arr, arr + number);
    return arr[number - 1];
}

// maxn 模板具体化
template <>
const char *maxn(const char *str[], int number)
{
    const char *maxv = *str;
    for (int i = 0; i < number; i++) {
        maxv = strlen(str[i]) > strlen(maxv) ? str[i] : maxv;
    }
    return maxv;
}

int main()
{
    int arr1[6] = {2, 5, 7, 9, 3, 12};
    std::cout << maxn<int>(arr1, 6) << "\n";
    double arr2[4] = {3.8, 5.9, 3.2, 5.6};
    std::cout << maxn<double>(arr2, 4) << "\n";
    const char *arr3[5] = {"123", "12345", "123456", "abcdefg", "xio"};
    std::cout << maxn(arr3, 5) << "\n";
    return 0;
}