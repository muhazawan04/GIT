#include <iostream>
#include "ourclasses.h"

using namespace std;

int main()
{
    myTime t1;
    t1.setHours(12);
    t1.setMinutes(6);
    t1.setSeconds(30);
    t1.print();
    return 0;
}
