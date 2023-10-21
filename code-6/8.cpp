#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifs;
    std::string filename;
    std::cout << "Please enter name of data file: ";
    std::getline(std::cin, filename);
    ifs.open(filename);

    if (!ifs.is_open()) {
        std::cout << "Could not open the file " << filename << "\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    while (ifs.get(ch), ifs.good()) {
        count++;
        putchar(ch);
    }
    if (count == 0) {
        std::cout << "No data processed.\n";
    } else {
        std::cout << count << " characters in the file " << filename << "\n";
    }
    ifs.close();
    return 0;
}