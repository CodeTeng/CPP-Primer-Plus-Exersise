#include <iostream>
#include <string>

int main()
{
    std::string str;
    unsigned int count = 0;
    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    while (std::cin >> str, str != "done") {
        ++count;
    }
    std::cout << "You entered a total of " << count << " words.\n";
    return 0;
}