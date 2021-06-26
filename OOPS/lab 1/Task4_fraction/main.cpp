#include <iostream>
#include <stdlib.h>

using namespace std;

struct fraction{
    int neumerator;
    char sign;
    int denominator;
    void print(){
    cout << neumerator << "/" <<denominator<<endl;
    }
    fraction add(fraction addme){

        fraction sum;
        sum.denominator = denominator*addme.denominator;
        sum.neumerator = (neumerator*addme.denominator) + (addme.neumerator*denominator);

        return sum;
    }
        fraction subtract(fraction subme){
        fraction sub;

        sub.denominator = denominator*subme.denominator;
        sub.neumerator = (neumerator*subme.denominator) - (subme.neumerator*denominator);

        return sub;
    }
    fraction multiply(fraction mltpme){
        fraction mltp;

        mltp.denominator = denominator*mltpme.denominator;
        mltp.neumerator = neumerator*mltpme.neumerator;
        return mltp;

    }
    fraction simplify(){
        fraction simp;
        int hcf = 0;
        if (denominator > neumerator)
        {
        for (int i = 2; i<=denominator; i++){
            if (neumerator % i == 0 && denominator % i == 0){
                hcf = i;
                }
            }
        }
        if (denominator < neumerator)
        {

        for (int i = 2; i<=neumerator; i++){
            if (neumerator % i == 0 && denominator % i == 0){
                hcf =i;
                }
            }
        }
        simp.neumerator = neumerator/hcf;
        simp.denominator = denominator/hcf;
            return simp;
    }
};

int main()
{
    system("color f0");
    fraction f1,f2,fa,fs,fm,fsm1,fsm2,fsma,fsms,fsmm;
    cout << "First Fraction!\nEnter first neumerator\n";
    cin >> f1.neumerator;
    cout <<"Enter denominator\n";
    cin >> f1.denominator;

    cout << "Second Fraction!\nEnter second neumerator\n";
    cin >> f2.neumerator;
    cout <<"Enter denominator\n";
    cin >> f2.denominator;
    f1.print();
    f2.print();

    fa = f1.add(f2);
    cout << f1.neumerator << "/" <<f1.denominator << " + "<<f2.neumerator << "/" <<f2.denominator<<" = ";
    fa.print();
    fs = f1.subtract(f2);
    cout << f1.neumerator << "/" <<f1.denominator << " - "<<f2.neumerator << "/" <<f2.denominator<<" = ";
    fs.print();
    fm = f1.multiply(f2);
    cout << f1.neumerator << "/" <<f1.denominator << " * "<<f2.neumerator << "/" <<f2.denominator<<" = ";
    fm.print();
    fsm1 = f1.simplify();
    cout <<"Simplified Form of first variable: ";
    fsm1.print();
    fsm2 = f2.simplify();
    cout <<"Simplified Form of Second variable: ";
    fsm2.print();
    fsma = fa.simplify();
    cout <<"Simplified Form of addition: ";
    fsma.print();
    fsms = fs.simplify();
    cout <<"Simplified Form of subtraction: ";
    fsms.print();
    fsmm = fm.simplify();
    cout <<"Simplified Form of multiplication: ";
    fsmm.print();
    return 0;

}
