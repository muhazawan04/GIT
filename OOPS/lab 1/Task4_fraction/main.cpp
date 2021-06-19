#include <iostream>
#include <stdlib.h>

using namespace std;

struct fraction{
    int nominator;
    char sign;
    int denominator;
    void print(){
    cout << nominator << "/" <<denominator<<endl;
    }
    fraction add(fraction addme){

        fraction sum;
        sum.denominator = denominator*addme.denominator;
        sum.nominator = (nominator*addme.denominator) + (addme.nominator*denominator);

        return sum;
    }
        fraction subtract(fraction subme){
        fraction sub;

        sub.denominator = denominator*subme.denominator;
        sub.nominator = (nominator*subme.denominator) - (subme.nominator*denominator);

        return sub;
    }
    fraction multiply(fraction mltpme){
        fraction mltp;

        mltp.denominator = denominator*mltpme.denominator;
        mltp.nominator = nominator*mltpme.nominator;
        return mltp;

    }
    fraction simplify(fraction simpme){
        fraction simp;
        int temp,hcf,x;
    if ( denominator > nominator) {
        temp = denominator;
        denominator = nominator;
        nominator = temp;
        x =2;
    }

    for (int i = 1; i <=  denominator; ++i) {
        if (nominator % i == 0 && denominator % i ==0) { // loop starts from 1 up till the number by which both
                                                        // nominator and denominator are divisible
            hcf = i;
        }
        if (x == 2){
        nominator = denominator;
        denominator = temp;
    }
        simp.nominator = nominator/hcf;
        simp.denominator = denominator/hcf;
    }
        return simp;
    }
};

int main()
{
    system("color f0");
    fraction f1,f2,fa,fs,fm,fsm1,fsm2,fsma,fsms,fsmm;
    cout << "First Fraction!\nEnter first Nominator\n";
    cin >> f1.nominator;
    cout <<"Enter Denominator\n";
    cin >> f1.denominator;

    cout << "Second Fraction!\nEnter second Nominator\n";
    cin >> f2.nominator;
    cout <<"Enter Denominator\n";
    cin >> f2.denominator;
    f1.print();
    f2.print();

    fa = f1.add(f2);
    fs = f1.subtract(f2);
    fm = f1.multiply(f2);
    fsm1 = f1.simplify(f2);
    fsm2 = f2.simplify(f1);
    fsma = fa.simplify(f2);
    fsms = fs.simplify(f2);
    fsmm = fm.simplify(f2);
    cout << f1.nominator << "/" <<f1.denominator << " + "<<f2.nominator << "/" <<f2.denominator<<" = ";
    fa.print();
    cout << f1.nominator << "/" <<f1.denominator << " - "<<f2.nominator << "/" <<f2.denominator<<" = ";
    fs.print();
    cout << f1.nominator << "/" <<f1.denominator << " * "<<f2.nominator << "/" <<f2.denominator<<" = ";
    fm.print();
    cout <<"Simplified Form of first variable: ";
    fsm1.print();
    cout <<"Simplified Form of Second variable: ";
    fsm2.print();
    cout <<"Simplified Form of addition: ";
    fsma.print();
    cout <<"Simplified Form of subtraction: ";
    fsms.print();
    cout <<"Simplified Form of multiplication: ";
    fsmm.print();
    return 0;

}
