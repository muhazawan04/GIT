#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class myComplex{
private:
    double real;
    double imaginary;

public:
    myComplex();
    ~myComplex();
    myComplex(double r, double i);
    void setreal(double r);
    void setimaginary(double i);

    double getreal();
    double getimaginary();

    void print();

};


#endif // OURCLASSES_H_INCLUDED
