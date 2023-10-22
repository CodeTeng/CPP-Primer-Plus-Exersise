#include <iostream>
#include "person.h"

int main()
{
    using std::cout;
    using std::endl;

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "sssssssssssssssssssdddddddddd");
    
    one.show();
    cout << endl;
    one.FormalShow();
    
    two.show();
    cout << endl;
    two.FormalShow();
    
    three.show();
    cout << endl;
    three.FormalShow();
    return 0;
}