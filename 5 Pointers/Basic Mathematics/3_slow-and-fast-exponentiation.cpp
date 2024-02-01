// slow and fast exponentiation

#include<iostream>
using namespace std;

int fastExponentiation(int a , int b){
    int ans = 1;
    while(b > 1){
        if(b & 1 ==1){
            ans = ans * a;
        }
        a = a*a;
        b = b>>1;
    }
    return (ans * a);
}


void slowExponentiation(int a, int b){
    int ans = 1;
    for(int i =0 ; i<b ; i++){
        ans = ans*a;
    }
    cout<<ans<<endl;
}


int main(){
    int a,b;
    cin>>a>>b;
    // slowExponentiation(a,b)<<endll;
    cout<<fastExponentiation(a,b);
    
    return 0 ;
}