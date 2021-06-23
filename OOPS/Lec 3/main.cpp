#include <iostream>
#include "myclasses.h"
using namespace std;

int main()
{

    const rectArea r1(6,4); // now this value cannot be changed as it is a constant object
    cout << "address of r1 = "<< &r1;
    r1.print();

    return 0;
}
