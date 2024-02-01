// friend keyword in cpp


#include<iostream>
using namespace std;

class A {
    private : 
    int x,y;

    public:
    //initilisation list

    A(): x(0),y(0) {}
    A(int _x, int _y): x(_x),y(_y){}

    int getX(){
        return x;
    }

    void setX(int val){
         x = val;
    }

    friend class B;
    
};

class B{
    public : 
    void print(const A & obj){
        cout<<"x = "<<obj.x <<"  " << "y = "<<obj.y<<endl;
    }
};


class Box{
    private:
    int width;

    Box(int _w) : width(_w){};     // private ctor;

    public:
    int getWidth()const{
        return width;
    }

    void setWidth(int W){
        width = W;
    }

    friend class BoxFactory;
};

class BoxFactory{
    int count;
    
    public :
    Box getBox(int _w){
        count++;
        return Box(_w);
    }
};


int main(){
    A obj1 ;
    A obj2 (3,6);

    B bx;
    bx.print(obj1);
    bx.print(obj2);

    // hense by using friend keyword , we can access even the private members outside the class


    BoxFactory bfact;
    Box first  = bfact.getBox(20);
    Box second  = bfact.getBox(47);

    cout<<first.getWidth()<<endl;
    cout<<second.getWidth();
    
    return 0 ;
}