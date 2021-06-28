#include <iostream>
#include "task 5.h"
#include <stdlib.h>
using namespace std;

int main()
{
    system("color f0");
    fraction f1,f2,f3;
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
    fraction f3(f2);
}
