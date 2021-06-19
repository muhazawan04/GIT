#include "ourclasses.h"
#include <iostream>
using namespace std;
    myTime::myTime(){
    hours = 0;
    minutes = 0;
    seconds = 0;
    cout <<"Default constructor has bee invoked \n";
    }
    myTime::myTime(int h, int m, int s){
        setHours(h);
        setMinutes(m);
        setSeconds(s);
        cout <<"Overloaded constructor has bee invoked \n";
            } // overloaded constructor
    myTime::myTime(myTime &mt) //copy constructor
    {
        hours = mt.hours;
        minutes = mt.minutes;
        seconds = mt.seconds;
        cout << "Copy constructor has been invoked\n";
    } /// friend function of myTime class
    //means it is not the function of that class but have acces to that class
///set function
void myTime::setHours(int h){  //myTime:: tells us the scope of member that it belongs to class myTime
    if(h > 0 && h < 24){
        hours = h;
    }
    else{
        hours = 0;
    }
}
void myTime::setMinutes(int m){
    minutes = m;

}
void myTime::setSeconds(int s){
    seconds = s;
}
///get function
int myTime::getHours(){
    return hours;
}
int myTime::getMinutes(){
    return minutes;
}
int myTime::getSeconds(){
    return seconds;
}
void myTime::print(){
    cout << hours <<":"<<minutes<<":"<<seconds<<endl;
}
