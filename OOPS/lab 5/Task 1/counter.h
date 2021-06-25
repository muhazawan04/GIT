#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
class Counter{
private:
    int countt;
public:
    Counter();
    //overloaded Constructor to give pre count value
    Counter(int Pcount);
    // get the count value at any instant
    int getCount();
    // Increment or Decrement count
    int Countup();
    int Countdown();

    // Pre-increment Operator
    Counter operator++();
    // Post increment form
    Counter operator++(int);
    // pre increment Operator
    Counter operator--();
    // post increment Operator
    Counter operator--(int);

    void reset();
    void print();
};


#endif // COUNTER_H_INCLUDED
