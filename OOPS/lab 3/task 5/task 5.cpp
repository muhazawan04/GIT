#include "task 5.h"
#include <iostream>


using namespace std;
    void fraction::setneumerator(int n){
        neumerator = n;
    }
    void fraction::setdenominator(int d){
        denominator = d;
    }

    int fraction::getneumerator(){
        return neumerator;
    }
    int fraction::getdenominator(){
        return denominator;
    }
    void fraction::print(){
        cout << neumerator <<" / "<<denominator;
    }
  fraction(){
    neumerator =0;
    denominator =0;
    cout<< "Default constructor invoked"<<endl;
  }
  fraction(int n, int d){
    setneumerator(n);
    setdenominator(d);
    cout<< "overloaded constructor invoked"<<endl;
  }
  ~fraction(){
    cout<< "Destructor invoked"<<endl;
  }
  fraction(fraction &fr){
    neumerator = fr.neumerator;
    denominator = fr.denominator;
    cout << "Copy Constructor invoked"<<endl;
  }
