#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void func1(const box b)
{
    std::cout << "maker = " << b.maker << "\n";
    std::cout << "height = " << b.height << "\n";
    std::cout << "width = " << b.width << "\n";
    std::cout << "length = " << b.length << "\n";
    std::cout << "volume = " << b.volume << "\n";
}

void func2(box *b)
{
    float tmp = b->height * b->length * b->width;
    b->volume = tmp;
    std::cout << "maker = " << b->maker << "\n";
    std::cout << "height = " << b->height << "\n";
    std::cout << "width = " << b->width << "\n";
    std::cout << "length = " << b->length << "\n";
    std::cout << "volume = " << b->volume << "\n";
}

int main()
{
    box b = {"Teng", 3, 4, 5, 6};
    func1(b);
    func2(&b);
    return 0;
}