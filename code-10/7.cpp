#include <iostream>
#include "plorg.h"

int main()
{
    Plorg plorg1;
    plorg1.show();
    Plorg plorg2(20);
    plorg2.show();
    plorg2.setCi(30);
    plorg2.show();
    Plorg plorg3(40, "teng");
    plorg3.show();
    return 0;
}