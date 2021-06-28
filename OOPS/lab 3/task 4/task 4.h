#ifndef TASK_4_H_INCLUDED
#define TASK_4_H_INCLUDED
class myComplex{
private:
    double real;
    double imaginary;
public:
    myComplex(); //Default Constructor
    myComplex(double r, double i);//overloaded constructor
    myComplex(myComplex &mc); //Copy constructor
    ~myComplex();
  
    void setreal(double r);
    void setimaginary(double i);

    double getreal();
    double getimaginary();

    void print();

};


#endif // TASK_4_H_INCLUDED
