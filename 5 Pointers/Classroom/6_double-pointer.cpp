// double pointer

#include<iostream>
using namespace std;

void update(int* ptr){
    *ptr = *ptr +1;
}

void solve(int** dtr){
    **dtr  = (**dtr) * 2;
    *dtr = *dtr + 1;
}

int main(){
    int a =5;
    int *p = &a;
    int **q = &p;

    cout<<"Address of a : "<<&a<<endl;

    cout<<"Value at p : "<<p<<endl;
    cout<<"Address of p  : "<<&p<<endl;
    cout<<"Value at address stored in p : "<<*p<<endl;

    cout<<"value at q : "<<q<<endl;
    cout<<"Address of q : "<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl<<endl<<endl;


    cout<<"value of a : "<<a<<endl;
    cout<<"value at p : "<<p<<endl;
    update(p);
    cout<<a<<endl;

    solve(q);
    cout<<a<<endl;
    cout<<"New value of p : "<<p<<endl;


    return 0 ;
}