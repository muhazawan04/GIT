#include <iostream>
#include "ourclasses.h"
using namespace std;

int main()
{
    const mycomplex c1;
    const mycomplex c2(9.1,8.2);

    cout << "Real Part for c2 is  " << c2.getreal()<< endl ;
    cout << "Imaginary part for c2 is " << c2.getimaginary() << endl ;;

    c1.print();
    c2.print();

    return 0;
}
