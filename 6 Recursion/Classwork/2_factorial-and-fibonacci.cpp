// find factorial of a number using recursion

#include<iostream>
using namespace std;

int factorial(int n){
    // base condition
    if(n==0){
        return 1;
    }

    // recursive relation
    return n*factorial(n-1);
}

int fibo(int term){
    //base condition
    if(term == 1){
        return 0;
    }
    if(term ==2){
        return 1; 
    }
    
    //recursive relation
    return  fibo(term-1) + fibo(term-2);

}

int main(){
    int num;
    cout<<"Enter value of n : "<<endl;
    cin>>num;

    cout<<"Factorial  of "<<num<<" is "<<factorial(num)<<endl;

    cout<<num<<" terms of the fibonaccin sequence are : ";
    for(int i=1 ;i<= num ;i++){
        cout<<fibo(i)<<"  ";
    }


    return 0 ;
}