#include <iostream>
#include <array>

int main()
{
    const int ArSize = 10;
    std::array<double, ArSize> donations;
    int count = 0;
    while (count < ArSize && std::cin >> donations[count]) {
        if (++count < ArSize) {
            std::cout << "donation #" << count + 1 << ": ";
        }
    }
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += donations[i];
    }
    double average = total / count;
    std::cout << "average = " << average << std::endl;
    int res = 0;
    for (int i = 0; i < count; i++) {
        if (donations[i] > average) {
            res++;
        }
    }
    if (count == 0) {
        std::cout << "No donation\n";
    } else {
        std::cout << average << " = average of ";
        std::cout << count << " donations.\n";
        std::cout << res << " numbers are greater than the average.\n";
    }
    return 0;
}