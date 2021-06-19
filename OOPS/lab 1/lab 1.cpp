#include <iostream>

using namespace std;

struct myTime
{              // defining a new structure myTime is name of that struct
    int hours; // data member of structures
    int minutes;
    int seconds;

    // this is what we call aggregation
};

struct student
{
    char name[20]; // talking as example that struct can have different data types
    double height;
    float weight;
    bool marital_status;
    myTime happy_time;   // one structure can have another structure as a member
                         //  student s; // this is wrong because from definition a struct can not be member of itself
    student *best_buddy; // this allowed this is pointing to the structure (Self referential struct)
};
int main()
{
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

    myTime t1; // defining a variable of data type myTime
    // to access different data members we use member access operator
    // there wre two member access operator
    // dot member access operator
    // arrow member access operatoru
    myTime *pt = &t1; // initializes a pointer it only stores adress to variable
    // & is known as adress of operator
    t1.hours = 4;
    t1.minutes = 34;
    t1.seconds = 50;
    cout << "Accessing t1 using dot member access operator" << endl;
    cout << "t1 = " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << endl;
    cout << "Accessing t1 using pointer pt" << endl;
    cout << "t1 = " << pt->hours << ":" << pt->minutes << ":" << pt->seconds << endl;
    cout << "size of t1 = " << sizeof(t1) << " bytes\n";

    return 0;
}
