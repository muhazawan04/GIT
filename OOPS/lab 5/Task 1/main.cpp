#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    int p;
    cout <<"Enter a preset value"<<endl;
    cin >> p;
    Counter c1(p);
    cout <<"Counter c1 = "<<c1.getCount()<<endl;
    cout <<"Pre Incrementing Counter = ";
    ++c1;
    cout <<"Counter c1 = "<<c1.getCount()<<endl;
    cout <<"post Incrementing Counter = ";
    c1++;
    cout <<"Counter c1 = "<<c1.getCount()<<endl;
    cout <<"Pre Decrementing Counter = ";
    --c1;
    cout <<"Counter c1 = "<<c1.getCount()<<endl;
    cout <<"Post Decrementing Counter = ";
    c1--;
    cout <<"Counter c1 = "<<c1.getCount()<<endl;
    return 0;
}
