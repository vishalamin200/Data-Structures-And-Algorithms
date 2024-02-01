// basics of pointer 

#include<iostream>
using namespace std;

int main(){
    int x = 20;
    double db = 20.43;
    char ch = 'a';

    int *pt = &x;
    double *pt2 = &db;
    char *pt3 = &ch;

    //size of all the pointers 

    cout<<sizeof(pt)<<endl;
    cout<<sizeof(pt2)<<endl;
    cout<<sizeof(pt3)<<endl;

    //accesing the value at pointers
    cout<<endl<<"Values at the pointers : "<<endl;
    
    cout<<"value of a : "<<x<<endl;
    cout<<"Address of a : "<<&x<<endl;

    cout<<"pt = "<<pt<<endl;
    cout<<"*pt = "<<*pt<<endl;
    cout<<"&pt = "<<&pt<<endl;

    //Null pointer 
    int *nptr = nullptr;
    // cout<<"nptr = "<<*nptr<<endl;

    //pointer arithmatic and  copy a pointer to another pointer
    
    int a =10;
    int *p = &a;
    int *q = p;
    int *r = q;

    cout<<"Value of a = "<<a<<endl; // 10
    cout<<"Address of a = "<<&a<<endl; // 100
    
    cout<<"p = "<<p<<endl;   // 100
    cout<<"&p = "<<&p <<endl; //200
    cout<<"*p = "<<*p<<endl;  //

    cout<<"q = "<<q<<endl;
    cout<<"&q = "<<&q <<endl;
    cout<<"*q = "<<*q<<endl;

    cout<<"r = "<<r<<endl;
    cout<<"&r = "<<&r <<endl;
    cout<<"*r = "<<*r<<endl;
 
    return 0 ;
}
