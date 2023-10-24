#include <iostream>
#include <string>
#include <cctype>

std::string ToLower(std::string &str)
{
    std::string tmp;
    for (auto &ch : str)
        if (!isspace(ch) && !ispunct(ch))
            tmp += tolower(ch);
    return tmp;
}

bool isPalindrome(const std::string &str)
{
    auto first = str.begin();
    auto last = str.end() - 1;
    while (first < last)
    {
        if (*first != *last)
            return false;
        else
        {
            first++;
            last--;
        }
    }
    return true;
}

int main()
{
    std::cout << "Please enter a str(quit to exit): ";
    std::string str;
    while (true)
    {
        std::getline(std::cin, str);
        if (str == "quit")
            break;
        str = ToLower(str);
        if (isPalindrome(str))
            std::cout << str << " is palindrome\n";
        else
            std::cout << str << " is not palindrome\n";
    }
    return 0;
}