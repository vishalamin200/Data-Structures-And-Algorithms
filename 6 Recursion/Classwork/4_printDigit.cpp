// print all the digit of the number

#include<iostream>
using namespace std;

void printDigit(int num){
    // base condition
    if(num == 0 ){
        return ;
    }

    //Processing
    int newNum = num/10;
    
    // recursive call
    printDigit(newNum);
    int digit = num % 10;
    cout<<digit<<" ";
  
}

int main(){
    int num ; 
    cout<<"Enter number : ";
    cin>>num;

    printDigit(num);
    return 0 ;
}