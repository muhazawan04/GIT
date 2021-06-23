#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED
class rectArea{
private:
    double length;
    double width;

public:
    rectArea();
    rectArea(double l,double w);

    void setlength(double l);
    void setwidth(double w);

    double getlength() const;
    double getwidth() const;

    void print() const;
};


#endif // MYCLASSES_H_INCLUDED
