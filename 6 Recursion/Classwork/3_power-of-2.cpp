// print the nth power of 2;

#include<iostream>
using namespace std;

int powerOf2(int n){
    //base condtion
    if(n==0){
        return 1;
    }

    // recursive relation
    return  2 * (powerOf2(n-1));
}

int main(){
    int n;
    cout<<"Enter power of 2 : ";
    cin>>n;

    cout<<"Ans = "<<powerOf2(n);
    return 0 ;
}