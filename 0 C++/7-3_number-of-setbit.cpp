// print the number of set bit in binary of an integer . (leetcode 191)

#include<iostream>
using namespace std;
int main(){
    int num , Count=0 ;
    cout<<"enter a number : ";
    cin>>num;

    while(num !=0 ){
        int bit = num & 1;
        if(bit == 1){
            Count++;
        }
        num = num>>1;
    }
    cout<<"NO. of set Bits is : "<<Count;
}