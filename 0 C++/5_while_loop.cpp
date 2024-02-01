// sum of n natural numbers 
#include<iostream>
using namespace std;
int sum(int n ){
    int sum =0, i =1 ; 
    while(i <= n){
        sum += i;
        i++;
    }
    return sum;
}

int sum_by_formula(int n ){
    int sum =0;
    sum = ( n*(n+1) )/2;
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    // cout<<"sum of n natural no. = " <<sum(n);
    cout<<"sum of n natural no. = " <<sum_by_formula(n);
    return 0;
}