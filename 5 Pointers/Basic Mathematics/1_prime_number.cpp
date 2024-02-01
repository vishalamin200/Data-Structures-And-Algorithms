// we will see the difference methods for finding the prime numbers

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


bool naiveApproach(int num){

    if( num<2) return false;
    for(int i=2 ; i<num ;i++){
        if(num %i == 0 ){
            return false;
        }
    }
    return true;
}


bool sqrtApproach(int num){
    if(num <2 ) return false ; 
    for(int i =2 ; i<= sqrt(num) ; i++){
        if(num % i == 0 ){
            return false;
        }
    }
    return true;
}

void sieveOfEratosthenes(int n){

    vector<bool> prime(n , true);
    int count =0 ;
    prime[0] = prime[1] = false;
    for(int i=2 ; i<n ;i++){
        if(prime[i]){
            count++;

            int j = 2*i;
            while(j<n){
                prime[j] = false;
                j += i;
            }
        }
    }

    cout<<count<<endl;
}

int main(){
    int n; 
    cout<<"enter the value of n : " ;
    cin>>n;

    
    cout<<"By naive Approach : ";
    for(int i = 2; i<n ;i++){
        if(naiveApproach (i)){
            cout<<i<<"  ";
        }
    }
    cout<<endl<<endl;

    cout<<"By sqrt  Approach : ";
    for(int i = 2; i<n ;i++){
        if(sqrtApproach (i)){
            cout<<i<<"  ";
        }
    }
    cout<<endl;

    cout<<"NO. of prime numbers : " ;
    sieveOfEratosthenes(n);


    return 0 ;
}


