/* Given a signed 32-bit integer x, print x with its digits reversed.  (leetcode 7)
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then print 0.   */

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num , rev = 0;
    cout<<"Enter an Integer: ";
    cin>>num;

    while(num !=0 ){
        int digit = num % 10;
        if(rev> INT_MAX/10 || rev< INT_MIN/10){
            return 0;
        }
        rev = rev*10 + digit;
        num = num/10;
    }
    cout<<"Reverse of a number is  : "<<rev;
    return 0 ;
}