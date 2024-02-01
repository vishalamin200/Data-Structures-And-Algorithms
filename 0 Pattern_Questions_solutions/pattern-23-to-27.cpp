/*
pattern23

*
*1*
*121*
*12321*
*121*
*1*
*

pattern 24 continuos num paramid

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

pattern26 : fliped diamond   

**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****

pattern27 : butterfly pattern

*       *
**     **
***   ***
**** ****
**** ****
***   ***
**     **
*       *


*/


#include <iostream>
using namespace std;

void pattern23(int n)
{
    for(int row=0 ; row<n ; row++){
        for(int col =0 ; col<2*row+1 ; col++){
            if(col==0  || col == 2*row){
                cout<<"*";
            }
            else{
                if(col<row+1){
                    cout<<col;
                }
                else{
                    cout<<2*row-col;
                }
            }
        }
        cout<<endl;
    }

    for(int row=n-2 ; row>=0 ; row--){
        for(int col =0 ; col<2*row+1 ; col++){
            if(col==0  || col == 2*row){
                cout<<"*";
            }
            else{
                if(col<row+1){
                    cout<<col;
                }
                else{
                    cout<<2*row-col;
                }
            }
        }
        cout<<endl;
    }
   
}

void pattern24(int n ){
    int counter=1;
    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<row+1; col++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}

void pattern26(int n ){
    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        for(int sp=0 ; sp<2*row+1 ; sp++){
            cout<<" ";
        }
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=n-1 ; row>= 0 ; row--){
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        for(int sp=0 ; sp<2*row+1 ; sp++){
            cout<<" ";
        }
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern27(int n){

    for(int row=n-1 ; row>= 0 ; row--){
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        for(int sp=0 ; sp<2*row+1 ; sp++){
            cout<<" ";
        }
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        cout<<endl;
    }   

    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        for(int sp=0 ; sp<2*row+1 ; sp++){
            cout<<" ";
        }
        for(int col=0 ; col<n-row ; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "No. of row(height) : ";
    cin >> n;
    pattern23(n) ;  cout<<"\n\n";
    pattern24(n);   cout<<"\n\n";

    pattern26(n);   cout<<"\n\n";
    pattern27(n);   cout<<"\n\n";
}