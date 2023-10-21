#include <iostream>

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n)
{
    int i;
    std::cout << "You can enter up to " << n;
    std::cout << " students's messages (enter to terminate).\n";
    for (i = 0; i < n; i++)
    {
        std::cout << "Student #" << i + 1 << " : " << std::endl;
        std::cout << "Enter the fullname(a blank line to quit): ";
        std::cin.getline(pa[i].fullname, SLEN);
        if ('\0' == pa[i].fullname[0])
            break;
        std::cout << "Enter the hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Enter the ooplevel: ";
        while (!(std::cin >> pa[i].ooplevel))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Please enter an number: ";
        }
        std::cin.get();
    }
    return i;
}

void display1(student st)
{
    std::cout << "\nName: " << st.fullname << std::endl;
    std::cout << "Hobby: " << st.hobby << std::endl;
    std::cout << "Ooplevel: " << st.ooplevel << std::endl;
}

void display2(const student *ps)
{
    std::cout << "\nName: " << ps->fullname << std::endl;
    std::cout << "Hobby: " << ps->hobby << std::endl;
    std::cout << "Ooplevel: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n)
{
    if (n > 0)
    {
        std::cout << "\nAll students' information:" << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << "Name: " << pa[i].fullname << std::endl;
            std::cout << "Hobby: " << pa[i].hobby << std::endl;
            std::cout << "Ooplevel: " << pa[i].ooplevel << std::endl;
        }
    }
}

int main()
{
    std::cout << "Enter class size: ";
    int class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    std::cout << "Done\n";
    return 0;
}