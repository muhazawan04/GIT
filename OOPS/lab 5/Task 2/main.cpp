#include<iostream>
#include"myComplex.h"

using namespace std;

int main()
{
    double f,s,f1,s1;
    cout << "First Complex number \nEnter real number"<<endl;
    cin >> f;
    cout << "Enter imaginary number"<<endl;
    cin >> s;
    cout << "Second Complex number \nEnter real number"<<endl;
    cin >> f1;
    cout << "Enter imaginary number"<<endl;
    cin >> s1;
    myComplex c2(f,s),c3(f1,s1),c4;
    // const myComplex c5(7.2,6.1);

    cout << "addition = ";
    c4 = c2 + c3; // implicitly calling operator function
    c4 = c2.operator+(c3); //explicitly calling operator
    c4.print();
    cout << "subtraction = ";
    c4 = c2 - c3;
    c4.print();
    cout << "Product = ";
    c4 = c2*c3;
    c4.print();
    cout << "division = ";
    c4 = c2/c3;
    c4.print();
    return 0;
}
