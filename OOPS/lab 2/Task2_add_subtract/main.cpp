#include <iostream>
#include <stdlib.h>
#include "ourclasses.h"
using namespace std;

int main()
{
    system("color f0");
    myTime t1,t2,t3;
    // Declaring t1
    t1.setHours()
    t1.setMinutes(6);
    t1.setSeconds(30);
    //Declaring t2
    t2.setHours(8);
    t2.setMinutes(42);
    t2.setSeconds(43);
       // subtracting
    t3 = t1.subtract(t2);
    cout <<"t1 = ";
    t1.print();
    cout <<"t2 = ";
    t2.print();
    cout <<"t3 = t1 - t2 =  ";
    t3.print();
    return 0;
}
