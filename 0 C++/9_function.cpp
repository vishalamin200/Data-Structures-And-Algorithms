// write a function for the factrial and nCr. 

#include<iostream>
using namespace std;

long factorial (int n){
    long fact=1;
    for(int i =1 ; i<=n ;i++ ){
        fact = fact*i;
    }
    return fact;
}

float nCr(int n , int r){ 
    return factorial(n)/(factorial(r) * factorial(n-r)) ;
} 

int fact (int n ){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
    
}


int main(){
    int n , r;
    cout<<"Enter n and r for nCr  : ";
    cin>>n>>r;
    
    (n<r)? cout<<"Not exit! ": cout<<"nCr is : "<<nCr(n,r)<<endl;

    cout<<"Enter N : ";
    cin>>n;
    cout<<"FACTORIAL OF N IS  "<<fact(n);
  
    return 0;
}

