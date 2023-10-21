#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter text for analysis, and type @"
                " to terminate input.\n";
    char ch;
    while (std::cin.get(ch) && ch != '@')
    {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
        if (!isdigit(ch)) {
            putchar(ch);
        }
    }
    return 0;
}