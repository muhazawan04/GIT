#include "ourclasses.h"
#include <iostream>
#include <cmath>

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
    fraction fraction::add(fraction addme){

        fraction sum;
        sum.denominator = denominator*addme.denominator;
        sum.neumerator = (neumerator*addme.denominator) + (addme.neumerator*denominator);

        return sum;

    }
    fraction fraction::subtract(fraction subme){
        fraction sub;
        sub.neumerator = abs((neumerator*subme.denominator) - (subme.neumerator*denominator));
        sub.denominator = denominator*subme.denominator;
        if((neumerator*subme.denominator) < (subme.neumerator*denominator))
        {
            sub.sign = '-';
        }

        return sub;
    }
    fraction fraction::multiply(fraction mltpme){
        fraction mltp;

        mltp.denominator = denominator*mltpme.denominator;
        mltp.neumerator = neumerator*mltpme.neumerator;
        return mltp;

    }

    fraction fraction::simplify(){
       fraction simp;
        int hcf = 0;
        if (denominator > neumerator)
        {
        for (int i = 2; i<=denominator; i++){
            if (neumerator % i == 0 && denominator % i == 0){
                hcf = i;
}
else{
     hcf = 1;
        }
            }
        }
        if (denominator < neumerator)
        {

        for (int i = 2; i<=neumerator; i++){
            if (neumerator % i == 0 && denominator % i == 0){
                hcf =i;
        }
            else{
     hcf = 1;
            }
            }
        }
        simp.setneumerator(neumerator/hcf);
        simp.setdenominator(denominator/hcf);
            return simp;
    }
