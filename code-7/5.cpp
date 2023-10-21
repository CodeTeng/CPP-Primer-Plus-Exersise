#include <iostream>

long long func(int n)
{
    if (n == 0) return 1;
    else return n * func(n - 1);
}

int main()
{
    int n;
    while (std::cin >> n, n >= 0) {
        long long res = func(n);
        std::cout << n << "!= " << res << "\n";
    }
    return 0;
}