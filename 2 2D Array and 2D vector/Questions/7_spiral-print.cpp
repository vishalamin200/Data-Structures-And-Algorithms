// spriral print of square matrix
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

void spiralPrint(int arr[][10] , int rows, int cols ){
    
    for(int n =0 ; n<=rows/2 ; n++){
        // for initial rows
        int j=0 ;
        for(j= j+n ;j<rows-n ; j++ ){
            cout<<arr[n][j]<<" ";
        }

        int i =1;
        for(i = i+n ; i<rows-n ;i++){
            cout<<arr[i][cols-1-n]<<" ";
        }
        
        int k;
        for(k = cols-2-n ; k >=n ; k--  ){
            cout<<arr[rows-1-n][k]<<" ";
        }

        int l;
        for(int l = rows-2-n ; l>=(n+1) ; l--){
            cout<<arr[l][n]<<" ";
        }
    }
}

void spiral_Print(int arr[][10] , int rows, int cols){
    int top =0 , bottom = rows-1;
    int left =0 , right = cols-1;
    
    int dir =0 ;
    while(left <=right && top <= bottom){
    
        if(dir ==0){
            for(int j = left ; j<=right ;j++){
                cout<<arr[top][j]<<" ";
            }
            top++;
        }

        else if(dir == 1){
            for(int i = top ; i <= bottom ; i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
        }
        else if(dir == 2){
            for(int j = right ; j >= left; j--){
                cout<<arr[bottom][j]<<" ";
            }
            bottom--;
        }
        else if(dir == 3){
            for(int i = bottom ; i >= top ; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
         
        dir = (dir+1) % 4;
    }
}


int main(){
    int rows, cols ;
    cout<<"Enter dimension of matrix (rows, cols) : ";
    cin>>rows>>cols;

    int arr[10][10];

    input(arr,rows,cols);
    print(arr,rows,cols);

    cout<<"Spiral print  : "<<endl;
    // spiralPrint(arr,rows ,cols);
    spiral_Print(arr,rows, cols);

}