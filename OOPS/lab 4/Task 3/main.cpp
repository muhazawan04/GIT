#include<iostream>
#include"ourclasses.h"

using namespace std;

int main()
{
    myComplex c1();
    myComplex c2(2.3,3.4),c3,c4;
    const myComplex c5(7.2,6.1);

    cout << "First Complex number = ";
    c2.print();
    cout << "Second Complex number = " <<c5.getreal()<<" + "<<c5.getimaginary()<<"j"<<endl;
    c3 = c2.add(c5);
    cout << "addition = ";
    c3.print();

    c3 = c2.subtract(c5);
    cout<< "subtraction = ";
    c3.print();

    c3 = c2.multiply(c5);
    cout << "Product = ";
    c3.printp();

    return 0;
}
