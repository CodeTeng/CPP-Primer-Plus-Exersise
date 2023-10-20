#include <iostream>

const int convert_number = 60;

double convert(double degree, double minute, double second)
{
    double tmp = (minute / convert_number) + (second / (convert_number * convert_number));
    return degree + tmp;
}

int main()
{
    double degree, minute, second;
    std::cout << "Enter a latitude in degree, minutes, and seconds:\n";
    std::cout << "First, enter the degrees:";
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc:";
    std::cin >> minute;
    std::cout << "Finally, enter the seconds of arc:";
    std::cin >> second;
    std::cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << convert(degree, minute, second) << " degress " << std::endl;
    return 0;
}