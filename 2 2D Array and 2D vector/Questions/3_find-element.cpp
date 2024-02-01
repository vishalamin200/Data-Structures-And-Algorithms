// find any element in a 2D array

// print the sum of each row and each column 

#include<iostream>
using namespace std;

bool find(int arr[][3], int rowSize , int key ){

    for(int i=0 ; i<rowSize; i++){

        for(int j=0 ; j<3 ; j++){
            if(arr[i][j] == key) {
                return true;
            } 
        }
    } 
    return false;
}


int main(){
    int key;

    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
    cout<<"key = ";
    cin>>key;
    find(arr,3 ,key) ? cout<<"key present " : cout<<"Not present ";

}