#include <iostream>
#include <string>

void func(std::string &str)
{
    for (char &ch : str) {
        ch = toupper(ch);
    }
}

int main()
{
    std::string str;
    while (true) {
        std::cout << "Enter a string (q to quit): ";
        std::getline(std::cin, str);
        if (str == "q") break;
        func(str);
        std::cout << str << "\n";
    }
    std::cout << "Bye\n";
    return 0;
}