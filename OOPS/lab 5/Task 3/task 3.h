#ifndef TASK_3_H_INCLUDED
#define TASK_3_H_INCLUDED
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

    void print();
};


#endif // TASK_3_H_INCLUDED
