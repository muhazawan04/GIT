#include "complex.h"
#include <iostream>

using namespace std;
    myComplex::myComplex(){ //Default construtor
    real = 0;
    imaginary =0;
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
    myComplex myComplex::add(myComplex op1){ // operator + overloaded
    myComplex sum;
    sum.setreal(real + op1.getreal());
    sum.setimaginary (imaginary + op1.getimaginary());

    return sum;
    }
    myComplex myComplex::subtract(myComplex op1){ // operator - overlaoded
        myComplex sub;
        sub.setreal(real - op1.getreal());
        sub.setimaginary(imaginary - op1.getimaginary());

    return sub;
    }
    myComplex myComplex::multiply(myComplex op1){
        myComplex mltp;
        int r,i;
        r = real*op1.getreal();
        mltp.setreal(r - (imaginary*op1.getimaginary()));
        i = real*op1.getimaginary();
        mltp.setimaginary(i + (imaginary*op1.getreal()));

    return mltp;
    }
    myComplex myComplex::Divide(myComplex op1){
        myComplex div;
        double  rdenom, idenom;
        double rnomi,inomi;

        rnomi = (real*op1.getreal()) + (imaginary*(op1.getimaginary()));
        inomi = ((imaginary*op1.getreal())) - (real*(op1.getimaginary())) ;
        rdenom = (op1.getreal()*op1.getreal()) + (op1.getimaginary()*(op1.getimaginary()));

        div.setreal(rnomi/rdenom);
        div.setimaginary(inomi/rdenom);
    return div;
    }
