
#include "task 4.h"
#include <iostream>

using namespace std;
    myComplex::myComplex(){ //Default construtor
    real = 0;
    imaginary =0;
    }
    myComplex::myComplex(double r, double i){ //Overloaded Constructor
        setreal(r);
        setimaginary(i);
    }
   myComplex::myComplex(myComplex &mc){ //Copy constructor
     real = mc.real;
     imaginary = mc.iamginary;
     cout<<"Copy Constructor has been invoked"<<endl;
   }

    myComplex::~myComplex(){
      cout << "Destructor has been invoked"<<endl;
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
