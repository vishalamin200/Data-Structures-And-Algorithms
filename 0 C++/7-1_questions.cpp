/*
1. leap year or not 
2. print n natural numbers .
3. sum of n natural numbers .
4. the fibonacci series .
*/

#include<iostream>
using namespace std;


void isleap(){
    int year;
    cout<<"Enter year : ";
    cin>>year;

    if(year %4 ==0 && year % 100 !=0){
        cout<<"It's leap year "<<endl;
    }

    else if(year % 400 ==0){
        cout<<"It's leap year "<<endl;
    }
    else{
        cout<<"It's not a leap year "<<endl;
    }
}

void printNatural(int n){
    for(int i =1 ; i <=n  ; i++){
        cout<<i<<" ";
    }
}

void sumNatural(int n ){
    int sum =0 ; 
    for(int i = 1 ; i<=n ; i++){
        sum += i;
    }
    cout<<"\nSum of Natural Number is : "<<sum <<endl;
}



void fibonacci(int n ){
    unsigned long long first = 0 , sec = 1 ,term;
    for(int i=1 ; i<= n ; i++){
        if(i==1){
            cout<<first<<" ";
            continue;
        }
        else if(i==2){
            cout<<sec<<" ";
            continue;
        }
        else{
            term = first + sec;
            cout<<term<<endl;
            first = sec;
            sec = term;
        }
    }
}


int  fiboByRecursion(int term ){
    int first = 0 ,sec = 1;
    if(term == 1 ){
       return 0 ;
    }
    else if (term == 2 ){
        return 1;
    }
    else{
        return fiboByRecursion(term-1) + fiboByRecursion(term-2);
    }
}



int main(){
    int n;
    // isleap();

    cout<<"enter the value of n= ";
    cin>>n;
    // printNatural(n);
    // sumNatural(n);
    // fibonacci(n);

    for(int i=1 ; i<=n ; i++){
        cout<< fiboByRecursion(i)<<" ";
    }
}