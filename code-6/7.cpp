#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::string words;
    unsigned int vowels = 0;
    unsigned int consonants = 0;
    unsigned int others = 0;
    std::cout << "Enter words (q to quit):";
    while (std::cin >> words, words != "q")
    {
        if (isalpha(words[0]))
        {
            switch (tolower(words[0]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                consonants++;
                break;
            }
        } else 
        {
            others++;
        }
    }
    std::cout << vowels << " words beginning with vowels" << std::endl;
    std::cout << consonants << " words beginning with consonants" << std::endl;
    std::cout << others << " others" << std::endl;
    return 0;
}