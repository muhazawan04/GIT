#include<iostream>
#include"ourclasses.h"

using namespace std;

int main()
{
    myComplex c3;

    myComplex *c1;
    c1 = new myComplex(3.1,3.2);
    const myComplex c5(7.2,6.1);

    cout << "First Complex number = ";
    c1->print();
    cout << "Second Complex number = " <<c5.getreal()<<" + "<<c5.getimaginary()<<"j"<<endl;
    c3 = c1->add(c5);
    cout << "addition = ";
    c3.print();

    c3 = c1->subtract(c5);
    cout<< "subtraction = ";
    c3.print();

    c3 = c1->multiply(c5);
    cout << "Product = ";
    c3.printp();

    return 0;
}
