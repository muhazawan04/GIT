#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class myComplex{
private:
    double real;
    double imaginary;
public:
    myComplex(); //Default Constructor
    ~myComplex(); //Destructor Function

    void setreal(double r);
    void setimaginary(double i);

    double getreal() const;
    double getimaginary() const;

    myComplex(double r, double i);
    myComplex(const myComplex &c); //here we are taking value as refrence
    myComplex add(const myComplex &c); //here we stop add from making changes to attributes
    void print();

};

#endif // OURCLASSES_H_INCLUDED
