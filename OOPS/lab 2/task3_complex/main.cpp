#include <iostream>
#include "ourclasses.h"
#include <stdlib.h>
using namespace std;

int main()
{
    system ("color f0");
    char s11,s12,s21,s22;
    int r1,r2,i1,i2;
    myComplex c1,c2,ca,cs,cm; // Defining variables for storing complex numbers
    cout << "Enter sign\n";
    cin >> s11;
    c1.setsign1(s11);
    cout << "Enter real part\n";
    cin >> r1;
    c1.setreal(r1);
    cout << "Enter sign\n";
    cin >> s12;
    c1.setsign(s12);
    cout << "Enter coefficient of imaginary part\n";
    cin >> i1;
    c1.setcoeff_imaginary(i1);

    cout << "Second Complex Number\n";
    cout << "Enter sign\n";
    cin >> s21;
    c2.setsign1(s21);
    cout << "Enter real part\n";
    cin >> r2;
    c2.setreal(r2);
    cout << "Enter sign\n";
    cin >> s22;
    c2.setsign(s22);
    cout << "Enter coefficient of imaginary part\n";
    cin >> i2;
    c2.setcoeff_imaginary(i2);

    ca = c1.add(c2);
    cs = c1.subtract(c2);
    cm = c1.multiply(c2);
    c1.print();
    cout << endl;
    c2.print();
    cout << "\nSum = ";
    ca.print();
    cout << "\nDifference = ";
    cs.print();
    cout << "\nProduct = ";
    cm.printp();
    return 0;
}
