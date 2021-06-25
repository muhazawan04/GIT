#include <iostream>
#include "task 3.h"
using namespace std;

int main()
{
    int n1,n2,d1,d2;
    cout <<"Enter Nominator of first fraction"<<endl;
    cin >> n1;
    cout <<"Enter Denominator of first fraction"<<endl;
    cin >> d1;
    fraction f1(n1,d1);
    cout <<"Enter Nominator of second fraction"<<endl;
    cin >> n2;
    cout <<"Enter Denominator of second fraction"<<endl;
    cin >> d2;
    fraction f2(n2,d2),f3;

    cout << "Addition =";
    f3 = f1 + f2;
    f3.print();
    cout << "Subtraction =";
    f3 = f1 - f2;
    f3.print();
    cout << "Product =";
    f3 = f1 * f2;
    f3.print();
    cout << "Division =";
    f3 = f1 / f2;
    f3.print();


    return 0;
}
