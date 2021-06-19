#include <iostream>
#include "ourclasses.h"
using namespace std;

mycomplex::mycomplex()
{
    real= 0;
    imaginary = 0;
    cout << "Default constructor has been invoked" << endl ;
}
mycomplex::mycomplex(double r , double i)
{
   setreal(r);
   setimaginary(i);
    cout << "Overloaded constructor has been invoked" << endl ;
}
void mycomplex::setreal(double r)
    {
        real = r;
    }
void mycomplex::setimaginary(double i)
    {
        imaginary = i;
    }
double mycomplex::getreal () const
    {
        return real;
    }

double mycomplex::getimaginary () const
    {
        return imaginary;
    }
/*mycomplex::~mycomplex()
{
    cout << "Destructor has been invoked" << endl ;
}*/
void mycomplex::print() const
 {
        if (imaginary<0)
        cout << real << " " <<imaginary <<"j"<< endl ;
        else
        cout << real << " + " <<imaginary <<"j" << endl ;
}
