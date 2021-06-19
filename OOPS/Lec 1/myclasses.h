#ifndef MYCLASSES_H_INCLUDED
#define MYCLASSES_H_INCLUDED
class Rectangle{
private:
    double w;
    double l;

public:
    Rectangle(double width, double length){
        setWidth(width);
        setLength(length);
    }
    double getWidth(){
        return w;
    }
    double getLength(){
        return l;
    }

    void setLength(double length){
        if(length < 0)
            l = -length;
        else
            l=length;
    }
    void setWidth(double width){
        if(width < 0)
            w = -width;
        else
            w=width;
    }
    double getArea(){
        return l*w;
    }
};


#endif // MYCLASSES_H_INCLUDED
