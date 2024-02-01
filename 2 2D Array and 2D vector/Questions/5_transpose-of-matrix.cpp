// transpose of the non square as well as square matrix

#include<iostream>
using namespace std;


void input(int arr[][10],int rows ,int cols){
    cout<<"Enter elements : "<<endl;

    for(int i=0  ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cin>>arr[i][j];
        }
    }
}

void print(int arr[][10], int rows, int cols){
    cout<<"Printing Array : "<<endl;
    for(int i=0  ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}

void transpose(int arr[][10] , int rows ,int cols){
    int x = min(rows,cols);   //  minmum of rows or cols; 
    cout<<"Matrix is Transposed :  "<<endl;
    for(int i=0  ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            // first we will transpose the largest square matrix can form i.e(x X x) from given matrix 
            //,and then transpose remaining elements

            if(i<x && j<x ){
                if(i<j)
                swap(arr[i][j] , arr[j][i]);
            }
            else {
                swap(arr[i][j] , arr[j][i]);
            }  
        }
    }
    
}

int main(){
    int rows, cols ;
    cout<<"Enter dimension of matrix (rows, cols) : ";
    cin>>rows>>cols;

    int arr[10][10];

    input(arr,rows,cols);
    print(arr,rows,cols);
    transpose(arr,rows,cols);
    print(arr,cols,rows);

}