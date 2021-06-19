#include "ourclasses.h"
#include <iostream>
using namespace std;

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
