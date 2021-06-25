#include <iostream>
#include "task4.h"

using namespace std;

    fraction::fraction(){}
    fraction::fraction(double n, double d){
    setnominator(n);
    setdenominator(d);
    }

    void fraction::setnominator(double n){
        nominator = n;
    }
    void fraction::setdenominator(double d){
        denominator = d;
    }
    double fraction::getnominator(){
        return nominator;
    }
    double fraction::getdenominator(){
        return denominator;
    }

    fraction fraction::operator +(fraction fr1)
    {
        fraction sum;
        sum.denominator = denominator*fr1.denominator;
        sum.nominator = (nominator*fr1.denominator) + (fr1.nominator*denominator);

        return sum;
    }
    fraction fraction::operator -(fraction fr1){
        fraction sub;

        sub.denominator = denominator*fr1.denominator;
        sub.nominator = (nominator*fr1.denominator) - (fr1.nominator*denominator);

        return sub;
    }
    fraction fraction::operator *(fraction fr1){
        fraction mltp;

        mltp.denominator = denominator*fr1.denominator;
        mltp.nominator = nominator*fr1.nominator;
        return mltp;
    }
    fraction fraction::operator /(fraction fr1){
        fraction div;
        div.nominator = nominator*fr1.denominator;
        div.denominator = denominator*fr1.nominator;

        return div;
    }
    bool fraction::operator <(fraction fr1){
        if(nominator < fr1.nominator && denominator < fr1.denominator)
        return true;
    else
        return false;
    }
    bool fraction::operator >(fraction fr1){
        if(nominator > fr1.nominator && denominator > fr1.denominator)
        return true;
    else
        return false;
    }
     void fraction::print(){
      cout << nominator << "/" << denominator<<endl;
     }
