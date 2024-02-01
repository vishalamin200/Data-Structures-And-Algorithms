/*  write a code for below patterns : 

1. square or rectacle

* * * * * * 
* * * * * * 
* * * * * * 
* * * * * *

2. Hollow rectangle 

* * * * * * 
*         * 
*         * 
* * * * * * 

*/

#include<iostream>
using namespace std;

void rectacle(int rowCount , int colCount){

    for(int row = 0 ; row< rowCount ; row++){
        for(int col =0 ; col<colCount ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void Hollow_rectagle(int rowCount , int colCount){
    for(int row = 0 ; row<rowCount ; row++){
        for(int col=0 ; col<colCount ; col++){
            if(row == 0 || row == (rowCount-1)){
                cout<<"* ";
            }
            else{
                if(col==0 || col == (colCount-1)){
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


void hollow_rectangle_2(int rowCount, int colCount){

    for(int row = 0 ; row<rowCount ; row++){
        for(int col=0 ; col<colCount ; col++){
            if(row == 0 || row == (rowCount-1)){
                cout<<"* ";
            }
            else{
                cout<<"* ";
                for(col=1 ; col<colCount-1 ; col++){
                    cout<<"  ";
                    
                }
                cout<<"* ";
            }
        }
        cout<<endl;
    }    
}

int main(){
    int rowCount ,colCount;
    cout<<" Enter No. of Rows and columns :  ";
    cin>>rowCount>>colCount;
    rectacle(rowCount,colCount);
    Hollow_rectagle(rowCount,colCount);
    hollow_rectangle_2(rowCount,colCount);
}

