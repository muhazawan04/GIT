#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED

class myComplex{
private:
    double real;
    double imaginary;
    static int count; //static data member
public:
    myComplex(); //Default Constructor
    ~myComplex(); //Destructor Function

    void setreal(double r);
    void setimaginary(double i);

    double getreal() const;
    double getimaginary() const;
    static int getcount();
    myComplex(double r, double i); //overloaded consntructor
    void print();


};

#endif // OURCLASSES_H_INCLUDED
