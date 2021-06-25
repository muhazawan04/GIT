#include <iostream>
#include "counter.h"

using namespace std;

    Counter::Counter(int Pcount){
        countt = Pcount;
    }
    // get the count value at any instant
    int Counter::getCount(){
        return countt;
    }
    // Increment count by 1
    int Counter::Countup(){
        ++countt;
        return countt;
    }
    // Decrement count by 1
    int Counter::Countdown(){
        --countt;
        return countt;
    }
    // Pre-increment Operator
    Counter Counter::operator++(){
    //cout << "pre Incrementing Counter"<<endl;
    return ++countt;
    //cout <<getCount()<<endl;
    }
    // Post increment form
    Counter Counter::operator++(int){
    //cout << "Post Incrementing Counter"<<endl;
    cout <<getCount()<<endl;
    return countt++;
    }
    // pre increment Operator
    Counter Counter::operator--(){
    //cout << "Pre Decrementing Counter"<<endl;
    return --countt;
    //cout <<getCount()<<endl;
    }
    // post increment Operator
    Counter Counter::operator--(int){
    //cout << "Post Decrementing Counter"<<endl;
    cout <<getCount()<<endl;
    return countt--;
    }

    void Counter::reset(){
        countt = 0;
    }
    void Counter::print(){
        cout << countt<<endl;
    }
