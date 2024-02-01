// print the counting using recursion

#include<iostream>
using namespace std;

void printCounting (int n , int i){
    //base condition
    if(i > n ){
        return ;
    }
    cout<<i<<" ";
    
    // recursive relation
    printCounting(n , i+1);
}

void printReverseCounting(int n){
    // base condition
    if(n==0){
        return ;
    }

    cout<<n<<" ";                        // Processing
    printReverseCounting(n-1);           // Tail recursion
}

int main(){
    int n;
    cin>>n;
    int i =1 ;
    printCounting(n , i);
    cout<<endl<<endl;
    printReverseCounting(n);
    return 0 ;
}