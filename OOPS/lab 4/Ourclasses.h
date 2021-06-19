#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class Timer{
private:
    int hours;
    int minutes;
    int seconds;
    static int timers;
public:
    Timer();
    ~Timer();
    Timer(int h,int m,int s);
    void print();
    static int getTimers();
};


#endif // OURCLASSES_H_INCLUDED
