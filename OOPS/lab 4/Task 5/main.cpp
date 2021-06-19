#include <iostream>
#include "ourclasses.h"
using namespace std;
int global;
int main()
{
    static int local;
    myComplex c1;
    cout <<"Address of c1 is "<< &c1 <<endl;
    myComplex c2;
    cout <<"Address of c2 is "<< &c2 <<endl;
    myComplex *c3;
    c3 = new myComplex(3.3,2.1);
    cout <<"Address of c3 is "<< &c3 <<endl;
    cout <<"Address of pointer c3 is "<< &*c3 <<endl;
    cout <<"Address of global is "<< &global <<endl;
    cout <<"Address of local is "<< &local<<endl;
    return 0;
}
