// left rotate matrix by 90 degree

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


void swapRows(int arr[][10] , int row1 , int row2 , int cols){
    for(int i=0 ; i<cols ; i++ ){
        swap(arr[row1][i] , arr[row2][i]);
    }
}

void swapCols(int arr[][10] , int col1 , int col2 , int rows){
    for(int i=0 ; i<rows ; i++ ){
        swap(arr[i][col1] , arr[i][col2]);
    }
}

void leftRotate(int arr[][10], int rows , int cols){
    cout<<"left rotate matrix by 90 degree : "<<endl;
    transpose(arr,rows , cols);    

    //newcols --> no. of colums after transpose =   no. of rows before transpose ; 
    //newrows --> no. of rows after transpose =   no. of columns before transpose ; 
    int newRows = cols , newCols = rows;

    for(int i=0 ; i<newRows/2 ; i++){
        swapRows(arr, i , cols -1-i , newCols);
    }
}

void rightRotate(int arr[][10], int rows , int cols){
    cout<<"Right rotate matrix by 90 degree : "<<endl;
    transpose(arr,rows , cols);    

    //newcols --> no. of colums after transpose =   no. of rows before transpose ; 
    //newrows --> no. of rows after transpose =   no. of columns before transpose ; 
    int newRows = cols , newCols = rows;

    // swap cols
    for(int j=0 ; j<newCols/2 ; j++){
        swapCols(arr, j , newCols -1-j , newRows);
    }
}


int main(){
    int rows, cols ;
    cout<<"Enter dimension of matrix (rows, cols) : ";
    cin>>rows>>cols;

    int arr[10][10];

    input(arr,rows,cols);
    print(arr,rows,cols);
    // leftRotate(arr,rows, cols);
    rightRotate(arr,rows,cols);
    print(arr,cols,rows);

}