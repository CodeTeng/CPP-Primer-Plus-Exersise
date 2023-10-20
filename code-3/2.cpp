#include <iostream>

const int conver_1 = 12;
const double convert_2 = 0.0245;
const double convert_3 = 2.2;

int main()
{
    double yingchi, yingcun, bang;
    std::cout << "Please input youer yingchi yingcun bang\n";
    std::cin >> yingchi >> yingcun >> bang;
    double height = (yingchi * conver_1 + yingcun) * convert_2;
    double weight = bang / convert_3;
    double BMI = weight / height; 
    std::cout << "your body BMI is:" << BMI << std::endl;
    return 0;
}