#include <iostream>
#include <stdlib.h>
using namespace std;

struct myComplex{
    double real;
    double imaginary;

    myComplex add(myComplex addme){
    myComplex sum;
    sum.real= real + addme.real;
    sum.imaginary = (imaginary + addme.imaginary);
    return sum;
    }
    myComplex subtract(myComplex subme){
        myComplex sub;
        sub.real = (real - subme.real);
        sub.imaginary = (imaginary - subme.imaginary);

    return sub;
    }
    myComplex multiply(myComplex mltpme){
        myComplex mltp;
        int r,i;
        r = real*mltpme.real;
        mltp.real = (r - (imaginary*mltpme.imaginary));
        i = real*mltpme.imaginary;
        mltp.imaginary = ( i + (imaginary*mltpme.real));

    return mltp;
    }
    myComplex divide(myComplex divme){
        myComplex div;
        double  rdenom;
        double rnomi,inomi;

        rnomi = (real*divme.real) + (imaginary*(divme.imaginary));
        inomi = ((imaginary*divme.real)) - (real*(divme.imaginary)) ;
        rdenom = (divme.real*divme.real) + (divme.imaginary*(divme.imaginary));

        div.real=(rnomi/rdenom);
        div.imaginary = (inomi/rdenom);
    return div;
    }
    void print(){
    if(imaginary < 0)
        {
            cout << real << "  "<< imaginary<<"j\n";
        }
    else if(imaginary == 0 && real == 0)
    {
            cout << real<<endl;
    }
    else
        {
            cout << real << " + "<< imaginary<<"j\n";
        }
    }
    };
int main()
{
    system("color F0");

    myComplex c1,c2,c3;
    cout<<"First Complex Number"<<endl;
    cout<<"Enter real part"<<endl;
    cin >> c1.real;
    cout<<"Enter Imaginary Part"<<endl;
    cin>> c1.imaginary;

    cout<<"Second Complex Number"<<endl;
    cout<<"Enter real part"<<endl;
    cin>> c2.real;
    cout<<"Enter Imaginary Part"<<endl;
    cin >> c2.imaginary;

    cout<< "Addition: \t= ";
    c3 = c1.add(c2);
    c3.print();

    cout<< "Subtraction: \t =";
    c3 = c1.subtract(c2);
    c3.print();

    cout<< "Product: \t= ";

    c3 = c1.multiply(c2);
    c3.print();

    cout<< "Division:\t= ";
    c3 = c1.divide(c2);
    c3.print();
}
