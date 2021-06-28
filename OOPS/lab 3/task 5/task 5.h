#ifndef TASK_5_H_INCLUDED
#define TASK_5_H_INCLUDED
class fraction{
///private
    int neumerator;
    char sign;
    int denominator;
public:
    fraction();
    fraction(int n, int d);
    ~fraction();
    fraction(fraction &fr);
  
    void setneumerator(int n);
    void setsign(char s);
    void setdenominator(int d);

    int getneumerator();
    char getsign();
    int getdenominator();
    void print();
    
};


#endif // TASK_5_H_INCLUDED
