#include <iostream>
#include <cstring>

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &stry, const char *testing)
{
    int length = strlen(testing);
    stry.str = new char[length + 1];
    strcpy(stry.str, testing);
    stry.ct = length;
}

void show(const stringy &stry, int number = 1)
{
    for (int i = 0; i < number; i++) {
        std::cout << "str = " << stry.str << "\n";
        std::cout << "ct = " << stry.ct << "\n";
    }
}

void show(const char *str, int number = 1)
{
    for (int i = 0; i < number; i++) {
        std::cout << "testing = " << str << "\n";
    }
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    delete[] beany.str;
    return 0;
}