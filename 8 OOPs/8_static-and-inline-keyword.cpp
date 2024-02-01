// static and inline keyword 

#include<iostream>
using namespace std;

class hello{

    public:
    static int  x, y;

    //ctor
    hello(int a, int b)  {
        x = a;
        y = b;
    }

    static void print(){
        cout<<"x = "<< x  <<endl <<"y = "<<y<<endl;
    }
    
};

inline void showNumber(int num){
    cout<<num<<" ";
}

int hello::x;
int hello::y;

int main(){
    // hello::print();

    hello obj1(12,10);
    hello obj2(100,200);

    obj1.print();
    obj2.print();


    //inline keyword explain
    showNumber(10);
    showNumber(20);
    showNumber(30);
    showNumber(40);

    // in inline function will directly replace with the function code during compiling , so it help in save memory 
    // because there is not function call happen in stack memery . but disadvantage is that, it take more time to run the run.

   
    return 0 ;
}

