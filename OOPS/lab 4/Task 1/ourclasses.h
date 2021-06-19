#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class mycomplex
{
private:
    double real;
    double imaginary;
public:
    mycomplex();
   // ~mycomplex();

    mycomplex(double r,double i);
   // mycomplex(mycomplex &c);

    void setreal(double r)  ;
    void setimaginary(double i);

    double getreal() const ;
    double getimaginary() const ;
    void print() const;
};


#endif // OURCLASSES_H_INCLUDED
