#include <iostream>
#include "myclasses.h"
using namespace std;
double rectArea(double, double);
int main()
{
    Rectangle r1(10,25);
    cout<<"Area of rectangle = ";
    cout <<r1.getArea()<<endl;
    double l,w;
    cout<<"Address of l is "<<&l<<endl;
    cout<<"Address of w is "<<&w<<endl;
    cout << "Enter length of Rectangle" << endl;
    cin>>l;
    cout<< "Enter width of Rectangle" << endl;
    cin>>w;
    cout<<"l = "<<l<<"w = "<<w<<endl;
    cout <<"Area of Rectangle = "<<rectArea(l,w)<<endl;
    cout<<"l = "<<l<<"w = "<<w<<endl;

    return 0;
}
double rectArea(double l,double w){
    cout<<"Address of l is"<<&l<<endl;
    cout<<"Address of w is"<<&w<<endl;

    return l*w;
}
