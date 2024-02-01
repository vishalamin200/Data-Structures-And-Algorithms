/*
16. pattern 16

********1********
*******1*2*******
******1*2*3******
*****1*2*3*4*****
****1*2*3*4*5****

17. Solid Diamond

   * 
  * * 
 * * * 
* * * * 
* * * * 
 * * * 
  * * 
   * 

18. Hollow Diamond

   * 
  * * 
 *   * 
*     * 
*     * 
 *   * 
  * * 
   *

19. solid half diamond

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

void pattern16(int n){
    for(int row=0 ; row<n ; row++){
        //printing initial stars
        for(int st=0 ; st<8-row ;st++){
            cout<<"*";
        }
        //priting number and star
        for(int num=0 ; num<row+1 ;num++ ){
            cout<<row+1;

            //this is specially for the n=9 
            if(row==8 && num== row){
                break;
            }

            cout<<"*";
        }
        //for remaining stars
        for(int st=0 ; st<7-row ; st++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void solid_diamond(int n){

    //full pyramid 

    for(int row=0 ; row<n ; row++){
        //for spaces 
        for(int i=0 ; i<n-1-row; i++){
            cout<<" ";
        }
        for(int col=0 ; col<row+1; col++){

            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted full pyramid
    for(int row=0 ; row<n ;row++){
        for(int sp=0 ; sp<row ;sp++){
            cout<<" ";
        }
        for(int star=0 ; star<n-row ;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollow_diamond(int n){
    for(int row=0 ; row<n ; row++ ){
        //for spaces 
        for(int sp=0 ; sp<n-1-row ;sp++){
            cout<<" ";
        }
        for(int col =0 ; col<row+1 ; col++){
            if(col==0 || col==row){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }
    
    //inveted
    for(int row=n-1 ; row>=0 ; row--){
        //for spaces 
        for(int sp=0 ; sp<n-1-row ;sp++){
            cout<<" ";
        }
        for(int col =0 ; col<row+1 ; col++){
            if(col==0 || col==row){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void solid_half_diamond(int n){
    //half pyramid
    for(int row=0 ; row< n; row++){
        for(int col=0 ; col< row+1 ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted half pyramid
    for(int row= n-2 ; row >=0; row--){
        for(int col=0 ; col< row+1 ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Number of rows (height) : ";
    cin>>n;                      cout<<"\n\n";
    pattern16(n);                cout<<"\n\n";
    solid_diamond(n);            cout<<"\n\n";
    hollow_diamond(n);           cout<<"\n\n";
    solid_half_diamond(n);       cout<<"\n\n";

}