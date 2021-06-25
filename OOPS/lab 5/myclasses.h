#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED

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

    myComplex add( myComplex c); //here we stop add from making changes to attributes
    void print();
    //creating operator function
    myComplex operator+(myComplex op1); // operator + overloaded
    myComplex operator- (myComplex op1); // operator - overlaoded


};
#endif // MYCLASSES_H_INCLUDED
