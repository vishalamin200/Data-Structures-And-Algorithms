// check whether the number is perfect square or not  // leetcode 367 :

#include<iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int s =0 , e = num;
    unsigned long mid = s + (e-s)/2;
    while( s <= e){
        if(mid*mid == num){
            return true;
        }
        else if(mid*mid > num){
            e = mid-1;
        }
        else{
            s = mid+1 ;
        }
        mid = s + (e-s)/2 ;
    }
    return false;
}

int main(){
    int num ;
    cout<<"Enter number : ";
    cin>>num;
    cout<<isPerfectSquare(num);
}

