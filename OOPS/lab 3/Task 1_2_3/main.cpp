#include <iostream>
#include "ourclasses.h"

using namespace std;

int main()
{
    myTime t1; // invoking default constructor
    myTime t2; // also invoking default constructor
    myTime t3(4,50,29); // invoking overloaded constructor
    myTime t4 = t3;
    myTime t5(t3); //copy constructor invoking the copy constructor
   
    t1.setHours(12);
    t1.setMinutes(6);
    t1.setSeconds(30);
    t1.print();
    cout<<"Addition = ";
    t2 = t1.add(t3);
    t2.print();
    
    cout <<"Subtraction ="<<endl;
    t2 = t1.subtract(t3);
    t2.print();
    
    return 0;
}
