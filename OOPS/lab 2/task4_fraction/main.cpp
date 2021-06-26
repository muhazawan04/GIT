#include <iostream>
#include "ourclasses.h"
#include <stdlib.h>
using namespace std;

int main()
{
    system("color f0");
    fraction f1,f2,fa,fs,fm,fsm1,fsm2,fsma,fsms,fsmm;
    int n,d;
    cout << "First Fraction!\nEnter first Nominator\n";
    cin >> n;
    f1.setneumerator(n) ;
    cout <<"Enter Denominator\n";
    cin >> d;
    f1.setdenominator(d);
    cout << "Second Fraction!\nEnter second Nominator\n";
    cin >> n;
    f2.setneumerator(n);
    cout <<"Enter Denominator\n";
    cin >> d;
    f2.setdenominator(d);
    cout <<"first Fraction = ";
    f1.print();
    cout <<"\nsecond Fraction = ";
    f2.print();

    fa = f2.add(f1);
    cout << "\nAddition = ";
    fa.print();
    fs = f1.subtract(f2);
    cout << "\nSubtraction = ";
    fs.print();
    fm = f1.multiply(f2);
    cout << "\nProduct = ";
    fm.print();
    fsm1 = f1.simplify();
    cout <<"\nSimplified Form of first variable: ";
    fsm1.print();
    fsm2 = f2.simplify();
    cout <<"\nSimplified Form of Second variable: ";
    fsm2.print();
    fsma = fa.simplify();
    cout <<"\nSimplified Form of addition: ";
    fsma.print();
    fsms = fs.simplify();
    cout <<"\nSimplified Form of subtraction: ";
    fsms.print();
    fsmm = fm.simplify();
    cout <<"\nSimplified Form of multiplication: ";
    fsmm.print();
    return 0;
}
