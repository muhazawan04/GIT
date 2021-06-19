#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class myTime{
    int hours;
    int minutes;            // these are privates and can only be accesses inside class
    int seconds;
public:          // functions under public can be accessed any where
    ///set function
    myTime();  // default construcotr
    myTime(int h, int m, int s); //overloaded constructor
                            ///we can have many overloaded constructor
    myTime(myTime &mt); //copy constructor
    void setHours(int h);
    void setMinutes(int m); // set function to modify attributes
    void setSeconds(int s);
    ///get function
    int getHours();         // get function to modify attributes
    int getMinutes();
    int getSeconds();

    void print();
//private:


#endif // OURCLASSES_H_INCLUDED
