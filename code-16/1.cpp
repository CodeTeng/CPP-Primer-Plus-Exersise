#include <iostream>
#include <string>

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

    // return str == std::string(str.rbegin(), str.rend());
}

int main()
{
    std::cout << "Please enter a str(quit to exit): ";
    std::string str;
    while (true)
    {
        std::getline(std::cin, str);
        if (str == "quit") break;
        if (isPalindrome(str)) std::cout << str << " is palindrome\n";
        else std::cout << str << " is not palindrome\n";
    }
    return 0;
}