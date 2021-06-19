#include<iostream>
#include"ourclasses.h"

using namespace std;

int main()
{
    myComplex c1;
    cout <<"No. of Complex numbers at this stage = "<<c1.getcount() <<endl;
    myComplex c2(2.3,3.4),c3,c4;
    cout <<"No. of Complex numbers at this stage = "<<c2.getcount() <<endl;
    const myComplex c5(4.3,6.1);
    cout <<"No. of Complex numbers at this stage = "<<c5.getcount() <<endl;

    cout << "First Complex number = ";
    c2.print();
    cout <<"No. of Complex numbers at this stage = "<< c2.getcount()<<endl;
    cout << "Second Complex number = " <<c5.getreal()<<" + "<<c5.getimaginary()<<"j"<<endl;

    c3 = c2.add(c5);
    cout <<"No. of Complex numbers at this stage = "<< c3.getcount()<<endl;
    cout << "addition = ";
    c3.print();

    c3 = c2.subtract(c5);
    cout <<"No. of Complex numbers at this stage = "<< c3.getcount()<<endl;
    cout<< "subtraction = ";
    c3.print();

    c3 = c2.multiply(c5);
    cout <<"No. of Complex numbers at this stage = "<< c3.getcount()<<endl;
    cout << "Product = ";
    c3.printp();

    return 0;
}
