#ifndef OURCLASSES_H_INCLUDED
#define OURCLASSES_H_INCLUDED
class myComplex{
///private:
    int real; //Real part
    int coeff_imaginary; // coefficient of imaginary part
    char sign1;
    char sign;
    char imaginary;
    int result;
///public
public:
    void setreal(int r);
    void setcoeff_imaginary(int c);
    void setsign1 (char s1);
    void setsign (char s);
    void setimaginary(char i);
    myComplex();
    int getreal();
    int getcoeff_imaginary();
    int getsign1 ();
    int getsign ();
    int getimaginary();
    void print();
    void printp();
    myComplex add(myComplex addme);
    myComplex add(myComplex addme);
    myComplex subtract(myComplex subme);
    myComplex multiply(myComplex mltpme);
};


#endif // OURCLASSES_H_INCLUDED
