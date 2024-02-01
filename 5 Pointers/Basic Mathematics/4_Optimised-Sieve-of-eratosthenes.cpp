// Optimised Seive of Eratosthenes Algorithms for finding prime numbers

#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n){
    vector<bool> prime ( n , true);
    prime[0] = prime[1] = false;

    for(int i=2 ; i*i <= n ;i++){
        if(prime[i]){

            int j = i*i ;  // fisrt optimisation
            while(j <= n){
                prime[j] = false;
                j += i;
            }
        }
    } 
    return prime;
     
}
int main(){
    int n ;
    cin>>n;


    vector<bool > ans = Sieve(n);
    for(int i =0 ; i< n ; i++){
        if(ans[i]){
            cout<<i<<" ";
        }
    }

    return 0 ;
}