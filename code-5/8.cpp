#include <iostream>
#include <cstring>

int main()
{
    const int ArSize = 256;
    char str[ArSize];
    unsigned int count = 0;
    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    while (std::cin >> str, strcmp("done", str)) {
        ++count;
    }
    std::cout << "You entered a total of " << count << " words.\n";
    return 0;
}