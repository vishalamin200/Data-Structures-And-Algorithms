// Abstract class 

#include<iostream>
using namespace std;
#define  PI = 3.1415

// class shape is an Abstract class because it contain a pure virtual class

class Shape{
    public:

    virtual float getArea() =0; 
};

class Rectangle{
    int length ;
    int breadth ;


    public :
    Rectangle() : length(0),breadth(0){}
    Rectangle(int l, int b) : length(l), breadth(b){};

    float getArea(){
        return length * breadth;
    }
};

class Circle{
    int radius;

    public:
    Circle() : radius(0){}
    Circle(int r) : radius(r){}

    float getArea(){
        return  3.1415 * radius * radius ;
    }
};


int main(){
    Rectangle ract(12,13);
    cout<<"Area of rectangle : "<<ract.getArea()<<endl;

    Circle cir(10);
    cout<<"Area of circle : "<<cir.getArea()<<endl;

    
    return 0 ;
}