#include "ourclasses.h"
#include <iostream>

using namespace std;
int myComplex::count;
    myComplex::myComplex(){ //Default constructor
    real = 0;
    imaginary =0;
    ++count;
    cout << "Default constructor invoked at "<<this<<endl;
    }
    myComplex::~myComplex() //Destructor
    {
        cout<<"Destructor Invoked at "<< this<<endl;
        --count;
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
    int myComplex::getcount(){ //static member function definition
        return count;
    }
    myComplex::myComplex(double r, double i){ //Overloaded Constructor
        setreal(r);
        setimaginary(i);
        cout << "Overloaded constructor invoked at " << this<<endl;
        ++count;
    }

    void myComplex::print(){
    if(imaginary < 0)
        {
            cout << real << "  "<< imaginary<<"j"<<endl;
        }
    else
        {
            cout << real << " + "<< imaginary<<"j"<<endl;
        }
    }
