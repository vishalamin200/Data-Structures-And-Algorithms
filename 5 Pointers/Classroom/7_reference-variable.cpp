// Reference variable 
// pass by value and pass by reference 
// Return by reference 


#include<iostream>
using namespace std;

void solve(int * ptr){
    ptr = ptr +1;

}

void solve2(int* &ptr){
    ptr = ptr +1;
}

int* answer(){
    int x = 20;
    int* ans = &x;
    return ans;
}

int main(){
    int a = 5;
    int& b = a;
    int& value = a;

    cout<<a<<" "<<b<<" "<<value<<endl;

    a= 20;
    cout<<"value : "<<value<<endl;

    value = 40;
    cout<<"b = "<<b<<endl<<endl<<endl;


    int x = 10;
    int *p = &x;
    cout<<"Value of P : "<<p<<endl;
    // pass by value : 
    solve(p);
    cout<<"After pass by value , p = "<<p<<endl;

    //pass by reference 
    solve2(p);
    cout<<"After pass by reference , p = "<<p<<endl<<endl;

   // Return by reference :

   cout<<"Random address return by answer fun. : "<<answer() <<endl;
    
    return 0 ;
}