#include <iostream>
#include <stdlib.h>
using namespace std;

struct myComplex{
    int real; //Real part
    int coeff_imaginary; // coefficient of imaginary part
    char sign1;
    char sign;
    int result;
    char imaginary; // imaginary part
    void print(){ // print function
    cout << sign1 << real <<sign<<coeff_imaginary<<imaginary;
    }
    void printp(){
    cout << result;
    }
    myComplex add(myComplex addme){
        myComplex sum;
        if(sign == '+' && addme.sign == '+'){
            if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (coeff_imaginary + addme.coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '+';
        }
        else if(sign == '-' && addme.sign == '-'){

           if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (coeff_imaginary + addme.coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '-';
        }
        else if(sign == '-' && addme.sign == '+' && coeff_imaginary >= addme.coeff_imaginary){
           if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (coeff_imaginary - addme.coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '-';
        }
        else if(sign == '-' && addme.sign == '+' && coeff_imaginary < addme.coeff_imaginary){
            if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (addme.coeff_imaginary-coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '-';
        }
        else if(sign == '+' && addme.sign == '-' && coeff_imaginary >= addme.coeff_imaginary){
            if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (coeff_imaginary - addme.coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '+';
        }
        else if(sign == '+' && addme.sign == '-' && coeff_imaginary < addme.coeff_imaginary){
            if (sign1 == '+' && addme.sign1 == '+') {
                sum.real = (real + addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '-' && addme.sign1 == '-') {
                sum.real = (real + addme.real);
                sum.sign1 = '-';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real >= addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            else if (sign1 == '+' && addme.sign1 == '-' && real < addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real >= addme.real) {
                sum.real = (addme.real-real);
                sum.sign1 = '-';
            }
            else if (sign1 == '-' && addme.sign1 == '+' && real < addme.real) {
                sum.real = (real - addme.real);
                sum.sign1 = '+';
            }
            sum.coeff_imaginary = (addme.coeff_imaginary - coeff_imaginary);
            sum.imaginary = 'i';
            sum.sign = '-';
        }

        return sum;
    }
    myComplex subtract(myComplex subme){
        myComplex sub;
        if(sign == '+' && subme.sign == '+' && coeff_imaginary >= subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary - subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '+';
        }
        else if(sign == '+' && subme.sign == '+' && coeff_imaginary < subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (subme.coeff_imaginary - coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '-';
        }
        else if(sign == '-' && subme.sign == '-' && coeff_imaginary >= subme.coeff_imaginary){
           if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary - subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '-';
        }
        else if(sign == '-' && subme.sign == '-' && coeff_imaginary < subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (subme.coeff_imaginary - coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '+';
        }
        else if(sign == '+' && subme.sign == '-' && coeff_imaginary >= subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary + subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '+';
        }
        else if(sign == '+' && subme.sign == '-' && coeff_imaginary < subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary + subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '-';
        }
        else if(sign == '-' && subme.sign == '+' && coeff_imaginary >= subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary + subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '-';
        }
        else if(sign == '-' && subme.sign == '+' && coeff_imaginary < subme.coeff_imaginary){
            if (sign1 == '+' && subme.sign1 == '+' && real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '+' && real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real >= subme.real) {
                sub.real = (real - subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '-'&& real < subme.real) {
                sub.real = (subme.real-real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real >= subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '+' && subme.sign1 == '-' && real < subme.real)    {
                sub.real = (real + subme.real);
                sub.sign1 = '+';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real >= subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            else if (sign1 == '-' && subme.sign1 == '+'&& real < subme.real) {
                sub.real = (real + subme.real);
                sub.sign1 = '-';
            }
            sub.coeff_imaginary = (coeff_imaginary + subme.coeff_imaginary);
            sub.imaginary = 'i';
            sub.sign = '+';
        }
    return sub;
    }
    myComplex multiply(myComplex mltpme){
        myComplex mltp;
        if((sign == '+' && mltpme.sign == '+') || (sign == '-' && mltpme.sign == '-')){
            if((sign1 == '+' && mltpme.sign1 == '+' )|| (sign1 == '-' && mltpme.sign1 == '-')){
                mltp.real = (real * mltpme.real);
                mltp.sign1 = '+';
                mltp.sign = '-';
                mltp.coeff_imaginary = (coeff_imaginary * mltpme.coeff_imaginary);
                mltp.imaginary = ' ';
                mltp.result = mltp.real - mltp.coeff_imaginary ;
            }
            if((sign1 == '+' && mltpme.sign1 == '-' )|| (sign1 == '-' && mltpme.sign1 == '+' )){
                mltp.real = (real * mltpme.real);
                mltp.sign1 = '-';
                mltp.sign = '+';
                mltp.coeff_imaginary = (coeff_imaginary * mltpme.coeff_imaginary);
            mltp.imaginary = ' ';
            mltp.result = mltp.real + mltp.coeff_imaginary ;
            }
        }

        else if((sign == '-' && mltpme.sign == '+' )|| (sign == '+' && mltpme.sign == '-')){
            if((sign1 == '+' && mltpme.sign1 == '+' )|| (sign1 == '-' && mltpme.sign1 == '-')){
                mltp.real = (real * mltpme.real);
                mltp.sign1 = '+';
            }
            if((sign1 == '+' && mltpme.sign1 == '-' )|| (sign1 == '-' && mltpme.sign1 == '+' )){
                mltp.real = (real * mltpme.real);
                mltp.sign1 = '-';
            }
            mltp.coeff_imaginary = (coeff_imaginary * mltpme.coeff_imaginary);
            mltp.imaginary = ' ';
            mltp.sign = '-';
            mltp.result = mltp.real - mltp.coeff_imaginary;
        }
        return mltp;
    }
};

int main()
{
    system("color f0");
    myComplex c1,c2,ca,cs,cm; // Defining variables for storing complex numbers
    cout << "Enter sign\n";
    cin >> c1.sign1;
    cout << "Enter real part\n";
    cin >> c1.real ;
    cout << "Enter sign\n";
    cin >> c1.sign ;
    cout << "Enter coefficient of imaginary part\n";
    cin >> c1.coeff_imaginary ;
    c1.imaginary = 'i';

    cout << "Second Complex Number\n";
    cout << "Enter sign\n";
    cin >> c2.sign1;
    cout << "Enter real part\n";
    cin >> c2.real ;
    cout << "Enter sign\n";
    cin >> c2.sign ;
    cout << "Enter coefficient of imaginary part\n";
    cin >> c2.coeff_imaginary ;
    c2.imaginary = 'i';

    ca = c1.add(c2);
    cs = c1.subtract(c2);
    cm = c1.multiply(c2);
    c1.print();
    cout << endl;
    c2.print();
    cout << "\nSum = ";
    ca.print();
    cout << "\nDifference = ";
    cs.print();
    cout << "\nProduct = ";
    cm.printp();
    return 0;
}
