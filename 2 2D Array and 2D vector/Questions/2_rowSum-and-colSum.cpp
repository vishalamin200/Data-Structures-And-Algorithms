// print the sum of each row and each column 

#include<iostream>
using namespace std;

void rowSum(int arr[][3], int rowSize ){
    cout<<"Row sums : ";

    for(int i=0 ; i<rowSize; i++){
        int sum =0 ;
        for(int j=0 ; j<3 ; j++){
            sum += arr[i][j];   
        }
        cout<<sum<<" ";
    } 
    cout<<endl;
}

void colSum(int arr[][3], int rowSize ){
    cout<<"Column Sums : ";

    for(int i=0 ; i<rowSize; i++){
        int sum =0 ;
        for(int j=0 ; j<3 ; j++){
            sum += arr[j][i];   
        }
        cout<<sum<<" ";
    }
    cout<<endl; 
}

int main(){
        int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
        rowSum(arr,3);
        colSum(arr,3);
         

}