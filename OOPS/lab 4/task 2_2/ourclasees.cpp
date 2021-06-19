#include "ourclasses.h"
#include <iostream>

using namespace std;
    myComplex::myComplex(){ //Default construtor
    real = 0;
    imaginary =0;
    cout << "Default constructor invoked"<<endl;
    }
    myComplex::~myComplex() //Destructor
    {
        cout<<"Destructor Invoked"<<endl;
    }
    void myComplex:: setreal(double r){
        real=r;
    }
    void myComplex::setimaginary(double i){
        imaginary = i;
    }

    double myComplex::getreal() const{
        return real;
    }
    double myComplex::getimaginary() const{
        return imaginary;
    }

    myComplex::myComplex(double r, double i){ //Overloaded Constructor
        setreal(r);
        setimaginary(i);
        cout << "Overloaded constructor invoked"<<endl;
    }
    myComplex::myComplex(const myComplex &c){ //copy constructor
        real = c.real;
        imaginary = c.imaginary;
        cout << "Copy  Constructor invoked"<<endl;
    }
    myComplex myComplex::add(const myComplex &c){ //add Function
        myComplex sum;
        sum.real = (real + c.real);
        sum.imaginary = (imaginary + c.imaginary);
        return sum;
    }
    void myComplex::print(){
    if(imaginary < 0)
        {
            cout << real << "  "<< imaginary<<"j";
        }
    else
        {
            cout << real << " + "<< imaginary<<"j";
        }
    }
