//substact the  product and sum of the digit of an integer .  ( leetcode 1281)

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int prod=1 ,sum =0 ;
    while(num !=0 ){
        int digit = num % 10;
        sum += digit;
        prod *= digit;
        num /=10; 
    }
    cout<<"Differece in product and sum of digit is : "<<prod- sum;
    return 0;
}

