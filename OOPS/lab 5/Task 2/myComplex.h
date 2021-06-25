#ifndef MYCOMPLEX_H_INCLUDED
#define MYCOMPLEX_H_INCLUDED
class myComplex{
private:
    double real;
    double imaginary;
public:
    myComplex(); //Default Constructor
    ~myComplex(); //Destructor Function

    void setreal(double r);
    void setimaginary(double i);

    double getreal();
    double getimaginary();

    myComplex(double r, double i);

    void print();
    //creating operator function
    myComplex operator+(myComplex op1); // operator + overloaded
    myComplex operator- (myComplex op1); // operator - overlaoded
    myComplex operator*(myComplex op1); // operator * overloaded
    myComplex operator/(myComplex op1); // operator / overloaded

};


#endif // MYCOMPLEX_H_INCLUDED
