#include <iostream>

const int second_to_minute = 60;
const int minute_to_hour = 60;
const int hour_to_day = 24; 

int main()
{
    long long seconds;
    std::cout << "Enter the number of seconds:";
    std::cin >> seconds;
    int days, hours, minutes;
    days = seconds / (hour_to_day * minute_to_hour * second_to_minute);
    hours = seconds / (minute_to_hour * second_to_minute) % hour_to_day;
    minutes = seconds / (second_to_minute * minute_to_hour) / second_to_minute;
    std::cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds % second_to_minute << " seconds\n";
    return 0;
}