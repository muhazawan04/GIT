#include<iostream>
#include"myclasses.h"

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

    c4 = c2.add(c3); // through this we do normal addition of complex but we cannot add them through simple addition
                        // For this we will do operator overloading
    cout << "addition = ";
    c4.print();
    cout << "addition using + overloaded operator\n";
    c4 = c2 + c3; // implicitly calling operator function
    c4 = c2.operator+(c3); //explicitly calling operator
    c4.print();

    c4 = c2 - c3;
    c4.print();
    return 0;
}
