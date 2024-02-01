/*
13. pattern13

1        
121      
12321    
1234321  
123454321

14. pattern14

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

15. palindrome num full pyramid

    1    
   121   
  12321  
 1234321 
123454321

*/
#include<iostream>
using namespace std;

void pattern13(int n ){
    for(int row=0 ; row<n ; row++){
        //for increasing numbers 
        for(int col=0 ; col<row+1 ; col++){
            cout<<col+1;
        }

        //for decreasing numbers
        for(int i=0 ; i<row ; i++){
            cout<<row-i;
        }
        cout<<endl;
    }
}

void pattern14(int n ){
    for(int row=0 ; row<n ; row++){
        //for increasing Characters
        char ch = 'A' ;
        for(int col=0 ; col<row+1 ; col++){
            cout<<char(ch+col);
        }

        //for decreasing Characters
        for(int i=row ; i>0 ; i--){
            cout<<char(ch+i-1);
        }
        cout<<endl;
    }
}

void palindrome_num_pyramid(int n ){
    for(int row=0 ; row<n ; row++){
        //initial spaces
        for(int sp=0 ; sp<n-1-row ;sp++){
            cout<<" ";
        }
        //increasing numbers
        for(int i =0 ; i<row+1 ; i++){
            cout<<i+1;
        }
        //decreasing numbers
        for(int j=row ; j>0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
}


int main(){
    int n ;
    cout<<"Number of rows (height) : ";
    cin>>n;
    pattern13(n);                cout<<"\n\n";
    pattern14(n);                cout<<"\n\n";
    palindrome_num_pyramid(n);   cout<<"\n\n";

}