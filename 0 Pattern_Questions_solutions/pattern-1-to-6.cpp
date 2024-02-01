/*
1. Half pyramid

*       
* *     
* * *   
* * * * 

2. Inverted Half Pyramid

* * * * 
* * *   
* *     
* 

3. Hollow Inverted Half pyramid

* * * * 
*   *   
* *     
* 

4. Full Pyramid 

   *    
  * *   
 * * *  
* * * *

5. Inverted full pyramid

* * * * * 
 * * * *  
  * * *   
   * *    
    * 

6. Hollow full pyramid

    *     
   * *    
  *   *   
 *     *  
* * * * * 



*/

#include<iostream>
using namespace std;

void half_pyramid(int n){
    for(int row=0 ; row< n; row++){
        for(int col=0 ; col< row+1 ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void inverted_half_pyramid(int n){
    for(int row=0 ; row< n; row++){
        for(int col=0 ; col< n- row ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollow_inverted_half_pyramid(int n ){
    for(int row=0 ; row<n ; row++){
        for(int col =0 ; col<n-row   ; col++){
            if(row==0 || row == n-1){
                cout<<"* ";
            }
            else{
                if(col==0 || col == n-row-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }

        }
        cout<<endl;
    }
}

void full_pyramid(int n){
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
}

void inverted_full_pyramid(int n){
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

void hollow_full_pyramid (int n){
    for(int row=0 ; row<n ;row++){
        for(int col=0 ; col<n-1-row; col++){
            cout<<" ";
        }
        
        if(row==0 || row==(n-1)){
            for(int i =0 ; i<row+1 ;i++){
                cout<<"*"<<" ";
            }
        }
        else{
            cout<<"* ";
            for(int sp=0 ; sp<row-1 ; sp++){
                cout<<"  ";
            }
            cout<<"* ";
            }
        cout<<endl;
        }

    }



int main(){
    int n ;
    cout<<"Enter the number of rows ( height) :";
    cin>>n;

    //cout<<"\n\n" is for the extra spaces between two patters 

    half_pyramid(n);                    cout<<"\n\n";
    inverted_half_pyramid(n);           cout<<"\n\n";
    hollow_inverted_half_pyramid(n);    cout<<"\n\n";
    full_pyramid(n);                    cout<<"\n\n";
    inverted_full_pyramid(n);           cout<<"\n\n";
    hollow_full_pyramid(n);             cout<<"\n\n";

    return 0;
}

