//const and mutable keyword in oops


#include<iostream>
using namespace std;

int main(){

    // const with pointer  : 



    const int* p = new int(2);    // this case be write as int const* p = new int(2);
    // int const*p = new int(2);

    
    // here in above CASE value inside the pointer is const but pointer itself is not const , so we can change it's address

    int*q = new int(10);
    p =q;
    cout<<"value inside p = " << *p<<endl;


   // second case :  pointer is constant and value can be different

   int* const exp = new int(24);

   *exp = 100;
   cout<<"value inside exp : "<<*exp<<endl;


   // this case : constant pointer and constant data;

   const int* const num = new int(55);

//    num = p;               // You cant change the pointer
//    *num = *exp;          // neither you can chane the it's value



    delete(p,exp,q,num);



    return 0;
}