#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class fraction{
///private
    int neumerator;
    char sign;
    int denominator;
public:
    void setneumerator(int n);
    void setsign(char s);
    void setdenominator(int d);

    int getneumerator();
    char getsign();
    int getdenominator();
    void print();
    fraction add(fraction addme);
    fraction subtract(fraction subme);
    fraction multiply(fraction mltpme);
    fraction simplify();
};


#endif // OURCLASSES_H_INCLUDED
