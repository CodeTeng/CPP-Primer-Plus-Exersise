#include <iostream>

void strcount(const std::string str)
{
    static int total = 0;
    std::cout << "\"" << str << "\" contains ";
    total += str.size();
    std::cout << str.size() << " characters\n";
    std::cout << total << " characters total\n";
}

int main()
{
    std::string str;
    std::cout << "Enter a line:\n";
    while (std::getline(std::cin, str), str != "") {
        strcount(str);
        std::cout << "Enter next line (empty line to quit):\n";
    }
    std::cout << "Bye\n";
    return 0;
}