#include <iostream>
#include "task 4.h"
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
    myComplex c5(c3);
    cout <<"c2 = ";
    c2.print();
  cout <<"\nc2 = ";
    c3.print();
  cout <<"\nc2 = ";
    c4.print();
  cout <<"\nc2 = ";
    c5.print();
}
