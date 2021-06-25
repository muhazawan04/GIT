#include "myclasses.h"
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

    double myComplex::getreal(){
        return real;
    }
    double myComplex::getimaginary() {
        return imaginary;
    }

    myComplex::myComplex(double r, double i){ //Overloaded Constructor
        setreal(r);
        setimaginary(i);
        cout << "Overloaded constructor invoked"<<endl;
    }
    myComplex myComplex::add(myComplex c){ //add Function
        myComplex sum;
        sum.real = (real + c.real);
        sum.imaginary = (imaginary + c.imaginary);
        return sum;
    }
    void myComplex::print(){
    if(imaginary < 0)
        {
            cout << real << "  "<< imaginary<<"j\n";
        }
    else
        {
            cout << real << " + "<< imaginary<<"j\n";
        }
    }
    myComplex myComplex::operator+(myComplex op1){ // operator + overloaded
    myComplex sum;
    sum.setreal(real + op1.getreal());
    sum.setimaginary (imaginary + op1.getimaginary());

    return sum;
    }
    myComplex myComplex::operator- (myComplex op1){ // operator - overlaoded
        myComplex sub;
        sub.setreal(real - op1.getreal());
        sub.setimaginary(imaginary - op1.getimaginary());

    return sub;
    }
