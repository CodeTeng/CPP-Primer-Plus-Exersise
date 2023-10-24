#include <iostream>
#include <algorithm>

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    return static_cast<int>(std::unique(ar, ar + n) - ar);
}

void print_array(long ar[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    long ar[] = {1L, 2L, 4L, 8L, 6L, 6L, 4L, 2L, 4L, 6L, 5L};

    std::cout << "Print array before sorting and removing repetitive values:" << std::endl;
    print_array(ar, sizeof(ar) / sizeof(ar[0]));
    std::cout << "Print array after sorting and removing repetitive values:" << std::endl;
    print_array(ar, reduce(ar, sizeof(ar) / sizeof(ar[0])));
    return 0;
}