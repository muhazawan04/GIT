#include <iostream>
#include <stdlib.h>

using namespace std;

struct myTime{
                // defining a new structure myTime is name of that struct
    int hours; // data member of structures
    int minutes;
    int seconds;
    void print (){
    cout <<hours<<":"<<minutes<<":"<<seconds<<endl; // we don't have to write t1. here beacuse it
                                                    // already have acces to members of function
    }
    myTime subtract(myTime op1){
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

};


int main()
{
    system("color f0");
    myTime t1,t2,t3;
    // Declaring t1
    t1.hours = 12;
    t1.minutes = 34;
    t1 .seconds = 30;
    // declaring t2
    t2.hours = 8;
    t2.minutes = 42;
    t2 .seconds = 40;
    // subtracting
    t3 = t1.subtract(t2);
    cout <<"t1 = ";
    t1.print();
    cout <<"t2 = ";
    t2.print();
    cout <<"t3 = t1 - t2 =  ";
    t3.print();



    return 0;
}
