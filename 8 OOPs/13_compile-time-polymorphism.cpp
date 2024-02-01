// polymorphism

// Compiler time Polymorphism  -->  function overloading and operator overloading
// Run time Polymorphism  -- >  Function overriding 


// Function Overloading

#include<iostream>
using namespace std;



class Maths{
    public :

    //this is an example of function overloading 

    int sum(int a, int b){
        return a + b;
    }

    int sum(int a, int b , int c){
        return a + b + c;
    }

    float sum (int a, float b){
        return a +b;
    }

};

class Para{
    public:

    int val;

    int  operator +(Para& obj){
        int value1 = this->val;
        int value2 = obj.val;
        return value1 - value2;
    }
};

int main(){
    Maths obj;
    cout<<"sum : "<<obj.sum(12,13) <<endl;
    cout<<"sum : "<<obj.sum(12,13,30)  <<endl;
    cout<<"sum : "<<obj.sum(12,13.2144f) << endl<<endl;


    cout<<"Operator Overloading "<<endl;

    Para obj1, obj2;
    obj1.val = 10;
    obj2.val = 5;

    cout<<obj1 + obj2<<endl;

    // here + , or any simple will use between two objects , or properties of two object 
    // to use between two object properties ,operator function must be write accordingly
    
    return 0 ;
}