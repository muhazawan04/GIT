#include <iostream>
#include "task 3.h"

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
        cout << nominator;
    }
    double fraction::getdenominator(){
        cout << denominator;
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
     void fraction::print(){
      cout << nominator << "/" << denominator<<endl;
     }
