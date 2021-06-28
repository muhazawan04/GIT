#include "ourclasses.h"
#include <iostream>
using namespace std;
    myTime::myTime(){
    hours = 0;
    minutes = 0;
    seconds = 0;
    cout <<"Default constructor has bee invoked \n";
    }
    myTime::myTime(int h){                       ///we can have many overloaded constructor
    setHours(h);
    minutes = 0;
    seconds = 0;
         cout <<"Overloaded constructor has bee invoked \n";
    }

    myTime::myTime(int h, int m){
        setHours(h);
        minutes(m);
        seconds = 0;
         cout <<"Overloaded constructor has bee invoked \n";
    }
    myTime::myTime(int h, int m, int s){
        setHours(h);
        setMinutes(m);
        setSeconds(s);
        cout <<"Overloaded constructor has bee invoked \n";
            } // overloaded constructor
    myTime::~myTime(){
        cout<<"Destructor Function invoked"<<endl;
    }
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
    void myTime::reset(){
        hours = 0;
        minutes = 0;
        seconds = 0;
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
            cout << "As we are taking carry for hours so we are going to Yesterday\n"; // means we have taken carry from the day although it is not included here.
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
            cout << "As we are taking carry for hours so we are going to Yesterday\n";
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
            cout << "As we are taking carry for hours so we are going to Yesterday\n";


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
            cout << "As we are taking carry for hours so we are going to Yesterday\n";
            }
            hours = hours +1;
            minutes = minutes + 1;
        }
    }
    return sub;
    }
