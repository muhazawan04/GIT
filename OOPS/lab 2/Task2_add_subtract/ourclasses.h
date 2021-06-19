#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class myTime{
    int hours;
    int minutes;            // these are privates and can only be accesses inside class
    int seconds;
public:          // functions under public can be accessed any where
    ///set function
    void setHours(int h);
    void setMinutes(int m); // set function to modify attributes
    void setSeconds(int s);
    ///get function
    int getHours();         // get function to modify attributes
    int getMinutes();
    int getSeconds();
    myTime add(myTime addme);
    myTime subtract(myTime subme);
    void reset();
    void print();
};


#endif // OURCLASSES_H_INCLUDED
