#include <iostream>
#include "Ourclasses.h"

using namespace std;
int Timer::timers;
    Timer::Timer():hours(0),minutes(0),seconds(0){
        ++timers;

    cout <<"A default timer object created at address "<<this<<endl;
    }
    Timer::Timer(int h, int m, int s):hours(h),minutes(m),seconds(s){
    ++timers;
    cout <<"An overloaded timer object created at address "<<this<<endl;
    }
    Timer::~Timer(){
    --timers;
    cout<<"A timer has been removed from your program at address"<<this<<endl;
    }
    void Timer:: print(){
    cout<< "Printing the timer object at"<<this<<endl;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    int Timer::getTimers(){
    return timers;
    }
