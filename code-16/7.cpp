#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> lotto(int count, int randomCount)
{
    std::vector<int> res;
    std::vector<int> temp;

    for (int i = 1; i <= count; i++) temp[i] = i;
    std::random_shuffle(temp.begin(), temp.end());
    res.assign(temp.begin(), temp.begin() + randomCount);
    return res;
}

int main()
{
    std::vector<int> winners;
    int dot_len, random_choice;

    std::cout << "Please enter two numbers" << std::endl;
    std::cout << "First for the number of dots on the lottery card and the number" << std::endl;
    std::cout << "Second for the number of dots randomly selected (q to quit): ";
    while (std::cin >> dot_len >> random_choice && random_choice <= dot_len) //循环进行多组输入;
    {
        winners = lotto(dot_len, random_choice);
        std::cout << "There are " << dot_len << " spots on the lottery card." << std::endl;
        std::cout << "Here are the randomly selected " << random_choice << " lottery dots numbers:" << std::endl;
        std::copy(winners.begin(), winners.end(), std::ostream_iterator<int, char>(std::cout, " ")); //使用ostream_iterator进行输出;
        std::cout << "\nYou can enter two numbers again (q to quit): ";
    }
    std::cout << "Done." << std::endl;

    return 0;
}