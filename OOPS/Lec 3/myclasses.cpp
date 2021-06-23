#include <iostream>
#include "myclasses.h"

using namespace std;

    rectArea::rectArea(): length(0), width(0) {
    }

    rectArea::rectArea(double l,double w):length(l),width(w){ // now we have member initializer list we don't need set functions
    //setlength(l);
    //setwidth(w)
    }

    void rectArea::setlength(double l){
        if(length >= 0)
            length = l;
        else
            length = -l;
    }
    void rectArea::setwidth(double w){
        if(width >= 0)
        {
            width = w;
        }
        else
        {
           width = -w;
    }
    }

    double rectArea::getlength() const{
        return length;
    }
    double rectArea::getwidth() const{
        return width;
    }

    void rectArea::print() const{
    cout<< length*width;
    }
