#include <iostream>

int main()
{
    double celsiusTemperature, fahrenheitTemperature;
    std::cout << "Please enter a Celsius value:";
    std::cin >> celsiusTemperature;
    fahrenheitTemperature = 1.8 * celsiusTemperature + 32.0;
    std::cout << celsiusTemperature << " degree Celsius is " << fahrenheitTemperature << " degree Fahrenheit\n";
    return 0;
}