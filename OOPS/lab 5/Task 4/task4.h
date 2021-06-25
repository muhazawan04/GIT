#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

class fraction{
private:
    int nominator;
    int denominator;
public:
    fraction();
    fraction(double n, double d);

    void setnominator(double n);
    void setdenominator(double d);
    double getnominator();
    double getdenominator();

    fraction operator +(fraction fr1);
    fraction operator -(fraction fr1);
    fraction operator *(fraction fr1);
    fraction operator /(fraction fr1);
    bool operator <(fraction fr1);
    bool operator >(fraction fr1);
    void print();
};


#endif // TASK4_H_INCLUDED
