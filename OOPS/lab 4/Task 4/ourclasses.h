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

    static int getcount(); //static member function
    myComplex(double r, double i);
    myComplex(const myComplex &c); //here we are taking value as reference
    myComplex add(const myComplex &c); //here we stop add from making changes to attributes
    myComplex subtract(const myComplex &c);
    myComplex multiply(const myComplex &c);
    void print();
    void printp();

};

#endif // OURCLASSES_H_INCLUDED
