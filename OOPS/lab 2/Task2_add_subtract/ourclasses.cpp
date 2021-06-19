#include "ourclasses.h"
#include <iostream>

using namespace std;

    void myTime::setHours(int h){
    if(h > 0) {
                hours = h;
    }
    else  {
            hours = 0;
    }
    }
    void myTime::setMinutes(int m){
    if (m < 0) {
            minutes = 0;
    }
    else {minutes = m%60;
        hours = hours + m/60;
    }
    }
    void myTime::setSeconds(int s){
    if (s < 0) {
            seconds = 0;
    }
    else {seconds = s%60;
        setMinutes(getMinutes() + s/60); // can also write minutes = minutes + s/60
    }
    }
    int myTime::getHours(){
    return hours;
    }
    int myTime::getMinutes(){
    return minutes;
    }
    int myTime::getSeconds(){
    return seconds;
    }
    myTime myTime::add(myTime op1){
    myTime sum;
        sum.seconds = (seconds + op1.seconds)%60;
        sum.minutes = ((seconds + op1.seconds)/60 + (minutes + op1.minutes))%60;
        sum.hours = ((seconds + op1.seconds)/60 + (minutes + op1.minutes))/60 + (hours + op1.hours);
        return sum;
    }
     myTime myTime::subtract(myTime op1){
    myTime sub,carry1,carry2,carry3;
    if (seconds > op1.seconds){
        sub.seconds = (seconds - op1.seconds)%60;
        carry1.minutes = (seconds - op1.seconds)/60;
        if ((minutes + carry1.minutes) > op1.minutes){
            sub.minutes = (minutes + carry1.minutes - op1.minutes)%60;
            carry2.hours = (minutes + carry1.minutes - op1.minutes)/60;
            if ((hours + carry2.hours) > op1.hours){
            sub.hours = (hours + carry2.hours - op1.hours)%60;
            }
            else if ((hours + carry2.hours) < op1.minutes){
            sub.hours = ((hours + carry2.hours + 24) - op1.hours)%60;
            cout << "Yesterday\n"; // means we have taken carry from the day although it is not included here.
            }

        }
        else if ((minutes + carry1.minutes) < op1.minutes){
            sub.minutes = ((carry1.minutes + 60) - op1.minutes)%60;
            hours = hours - 1;
            carry3.hours = (((minutes + (seconds - op1.seconds)/60) + 60) - op1.minutes)/60;
            if ((hours + carry3.hours) > op1.hours){
            sub.hours = (hours + carry3.hours - op1.hours)%60;
            }
            else if ((hours + carry3.hours) < op1.minutes){
            sub.hours = (hours + carry3.hours + 24 - op1.hours)%60;
            cout << "Yesterday\n";
            hours = hours + 1;
            }
            hours = hours + 1;
        }


    }
    else if (seconds < op1.seconds){
        sub.seconds = ((seconds + 60) - op1.seconds)%60;
        minutes = minutes - 1;
        carry1.minutes = ((seconds + 60) - op1.seconds)/60;
        if ((minutes + carry1.minutes ) > op1.minutes){
            sub.minutes = (minutes + carry1.minutes  - op1.minutes)%60;
            carry2.hours = (minutes + carry1.minutes - op1.minutes)/60;
            if ((hours + carry2.hours) > op1.hours){
            sub.hours = (hours + carry2.hours - op1.hours)%60;
            }
            else if ((hours + carry2.hours) < op1.minutes){
            sub.hours = ((hours + carry2.hours + 24) - op1.hours)%60;
            cout << "Yesterday\n";


            }

        }
        else if ((minutes + carry1.minutes) < op1.minutes){
            sub.minutes = ((minutes + carry1.minutes + 60) - op1.minutes)%60;
            hours = hours - 1;
            carry3.hours = ((minutes + carry1.minutes + 60) - op1.minutes)/60;
            if ((hours + carry3.hours) > op1.hours){
            sub.hours = (hours + carry3.hours - op1.hours)%60;
            }
            else if ((hours + carry3.hours) < op1.minutes){
            sub.hours = ((hours + carry3.hours + 24) - op1.hours)%60;
            cout << "Yesterday\n";
            }
            hours = hours +1;
            minutes = minutes + 1;
        }
    }
    return sub;
    }
    void myTime::reset(){
        hours = minutes = seconds = 0;
    }
    void myTime::print(){
    cout << hours <<":"<<minutes<<":"<<seconds<<endl;
    }
