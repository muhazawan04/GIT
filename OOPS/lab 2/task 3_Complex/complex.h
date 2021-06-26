#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class myComplex{
private:
    double real;
    double imaginary;
public:
    myComplex(); //Default Constructor

    void setreal(double r);
    void setimaginary(double i);

    double getreal();
    double getimaginary();

    myComplex(double r, double i);

    void print();

    myComplex add(myComplex op1);
    myComplex subtract(myComplex op1);
    myComplex multiply(myComplex op1);
    myComplex Divide(myComplex op1);

};


#endif // COMPLEX_H_INCLUDED
