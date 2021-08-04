#include<iostream>
#include"ourclasses.h"

using namespace std;

int main()
{
    myComplex c1();
    myComplex c2(2.3,3.4),c3,c4;
    const myComplex c5(7.2,6.1);

    c3 = c2.add(c5);
    cout << "addition = ";
    c3.print();


    return 0;
}
