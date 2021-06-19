#include <iostream>
#include "ourclasses.h"
using namespace std;

int main()
{
    myComplex mc(4.3,3.1);
    myComplex mc2(3,1);
    cout<< "address of MC is "<<&mc<<endl;
    cout<< "address of MC2 is "<<&mc2<<endl;
    mc.print();
    mc2.print();
    return 0;
}
