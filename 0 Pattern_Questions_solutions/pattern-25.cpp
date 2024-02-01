/*  pascal's triangle
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1

*/

#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1; 
    for(int i=1 ;i <=num ; i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n , int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}

void pattern25(int n ){
    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<row+1 ; col++){
            cout<<combination(row,col)<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n ;
    cout<<"No. of rows (height) : ";
    cin>>n;
    pattern25(n);
}