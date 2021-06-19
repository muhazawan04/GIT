#include <iostream>
#include "ourclasses.h"

using namespace std;

    myComplex::myComplex(){ //default constructor
        real = 0;
        imaginary = 0;
    }
    myComplex::~myComplex(){ //Destructorr
    }
    myComplex::myComplex(double r, double i){ //overloaded Constructor
        setreal(r);
        setimaginary(i);
    }
    void  myComplex::setreal(double r){
        real=r;
    }
    void myComplex::setimaginary(double i){
        imaginary =i;
    }

    double myComplex::getreal()
    {
        return real;
    }
    double myComplex::getimaginary(){
        return imaginary;
    }

    void myComplex::print(){
        cout << "printing Complex number at "<<this<<endl;
        if(imaginary>=0)
        {
            cout<<real<<" + "<<imaginary<<"j"<<endl;
        }
        else
        {
            cout<<real<<" "<<imaginary<<"j"<<endl;
        }

    }
