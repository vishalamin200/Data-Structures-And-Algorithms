// Shallow copy and deep copy constructor


#include<iostream>
using namespace std;

class ABC {
    private:
    int x;
    int* p;

    public:
    void print(){
        printf("x = %d \npointer p = %p \nContent of p (*p) = %d",x,p , *p);
        cout<<endl<<endl;
    }

    //  Default  Shallow copy constructor :  ( which copy the allocation as well , that we don't want)
    // ABC(const ABC& original ){
    //     cout<<"Copy constructor called ! "<<endl;
    //     x = original.x;
    //     p = original.p;
    // }


    // Smart deep copy constructor
    ABC(const ABC& original){
        cout<<"Smart copy constructor is called !"<<endl;

        x = original.x;
        p = new int;
        *p = *(original.p);
    }

   //initilisation list
   ABC(int _x, int _p) : x(_x),p(new int(_p)){}


   ~ABC(){cout<<"dectructor is called !"<<endl; }
};

int main(){
    ABC* obj = new ABC(1,2);
    obj->print();

    ABC obj3 = *obj;  
    
    // ABC* obj3 = obj; // in this case copy constructor will not called  
    // bacasue obj3  is a pointer of type ABC , if we equate to obj , then both will point to the same object .


    obj3.print();

    delete(obj);
    
    return 0 ;
}

