#include <iostream>
#include <stdlib.h>

using namespace std;


struct myTime{ // defining a new structure myTime is name of that struct
    int hours; // data member of structures
    int minutes;
    int seconds;
    void print (){ // print function have access to all the data members of myTime
    cout <<hours<<":"<<minutes<<":"<<seconds<<endl; // we don't have to write t1. here beacuse it
                                                    // already have acces to members of function
    }
    myTime add(myTime op1) {// here we only need one argument for addition because one argument is already given by default in structs
    // Explanation is given below
        myTime sum;
        sum.seconds = (seconds + op1.seconds)%60;
        sum.minutes = ((seconds + op1.seconds)/60 + (minutes + op1.minutes))%60;
        sum.hours = ((seconds + op1.seconds)/60 + (minutes + op1.minutes))/60 + (hours + op1.hours);
        return sum;
    // this is what we call aggregation
    }
};

struct student{
    char name[20]; // talking as example that struct can have different data types
    double height;
    float weight;
    bool marital_status;
    myTime happy_time; // one structure can have another structure as a member
//  student s; // this is wrong because from definition a struct can not be member of itself
    student *best_buddy; // this allowed this is pointing to the structure (Self referential struct)
};
int main()
{
    system("COLOR f0");
    /*
    int a; integer
    float b; floating point values
    double c; double floating point
    bool d; logical true false
    char e; single character
    short f; short int
    long int g; long int

    These data types are not enough for storing some data
    but we can import structures that are created by other people*/

    myTime t1,t2;           // defining a variable of data type myTime
                        // to access different data members we use member access operator
                        // there wre two member access operator
                        // dot member access operator
                        // arrow member access operatoru
    myTime *pt = &t1 ; // initializes a pointer it only stores adress to variable
                        // & is known as adress of operator
    t1.hours = 4;
    t1.minutes = 34;
    t1 .seconds = 50;
    t2.hours = 12;
    t2.minutes = 22;
    t2 .seconds = 50;
    myTime t3 = t1.add(t2);  // t2 will be transfered to op1 in function declared above
    t3 = t2.add(t1); // t2 is take by default and t1 is taken as argument and transferred to op1
    // op1 = t2.hours,t2.minutes,t2.seconds
    // hours = t1.hours, minutes =t1.minutes , seconds = t1.seconds
    // simply if we are calling it using t1 then it will have value of t1 by default
    // for other arument to be added it take the value of variable written in bracket
    cout <<"t1 = ";
    pt->print();

    cout <<"t2 = ";
    t2.print();
    cout <<"t1 + t2 = t3 = ";
    t3.print();

    //cout << "Accessing t1 using dot member access operator"<<endl;
    //cout << "t1 = " <<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds<<endl;
    //cout << "Accessing t1 using pointer pt"<<endl;
    //cout << "t1 = " <<pt->hours<<":"<<pt->minutes<<":"<<pt->seconds<<endl;
    //cout << "size of t1 = "<<sizeof(t1)<<" bytes\n";
    ///cout << "size of pt = "<<sizeof(pt)<<" bytes\n";


    return 0;
}
