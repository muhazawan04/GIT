#include "ourclasses.h"
#include <iostream>

using namespace std;

    void myComplex::setreal(int r){
    if (r > 0)
    {
        real = r;
    }
    else{
        cout <<"Wrong Input";
    }
    }
    void myComplex::setcoeff_imaginary(int c){
    if (c > 0)
    {
        coeff_imaginary = c;
    }
    else{
         cout << "Wrong Input";
    }
    }
    void myComplex::setsign1 (char s1){
    if (s1 == '+' || s1 == '-')
    {
        sign1 = s1;
    }
    else{
        cout << "Wrong Input";
    }
    }
    void myComplex::setsign (char s){
    if (s == '+' || s == '-')
    {
        sign = s;
    }
    else{
        cout <<"Wrong Input";
    }
    }
    void myComplex::setimaginary(char i){
        imaginary = 'i';
    }

    int myComplex::getreal(){
        return real;
    }
    int myComplex::getcoeff_imaginary(){
        return coeff_imaginary;
    }
    int myComplex::getsign1 (){
        return sign1;
    }
    int myComplex::getsign (){
        return sign;
    }
    int myComplex::getimaginary(){
        return imaginary;
    }
    void myComplex::print(){
        cout << sign1 << real << sign << coeff_imaginary <<"i";

    }
    void myComplex::printp(){
        cout << result;
    }
    myComplex myComplex::add(myComplex addme){
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
    myComplex myComplex::subtract(myComplex subme){
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
    myComplex myComplex::multiply(myComplex mltpme){
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
