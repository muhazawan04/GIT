#include <iostream>
#include "Ourclasses.h"
using namespace std;

int main()
{
    cout<<"No. of timers in RAM : "<<Timer::getTimers()<<endl;
    Timer t1;
     cout<<"No. of timers in RAM Now : "<<t1.getTimers()<<endl;
    Timer t2(7,8,6);
    cout<<"No. of timers in RAM Now : "<<t1.getTimers()<<endl;
    Timer t3(8,30,0);
    cout<<"No. of timers in RAM Now : "<<t1.getTimers()<<endl;
    Timer *t4 = new Timer(12,0,0);
    cout<<"No. of timers in RAM Now : "<<t1.getTimers()<<endl;
    cout<<"Address of t1 = "<<&t1<<endl;
    t1.print();

    cout<<"Address of t2 = "<<&t2<<endl;
    t2.print();

    cout<<"Address of t3 = "<<&t3<<endl;
    t3.print();
    delete t4;
    cout<<"No. of timers in RAM Now : "<<t1.getTimers()<<endl;

    return 0;
}
