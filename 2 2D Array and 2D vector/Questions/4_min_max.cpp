#include<iostream>
#include<climits>
using namespace std;

int  getMin(int arr[][3] , int rows){
    int mini = INT_MAX;

    for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<3 ; j++){
            if(arr[i][j]  <  mini) {
                mini = arr[i][j];
            }
        }
    }
    return mini;  
}

int  getMax(int arr[][3] , int rows){
    int max = INT_MIN;

    for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<3 ; j++){
            if(arr[i][j]  >  max) {
                max = arr[i][j];
            }
        }
    }
    return max;  
}

int main(){
    int arr[3][3];
    cout<<"Enter elements : ";

    for(int i =0  ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>> arr[i][j];
        }
    }

    cout<<"Max element : "<<getMax(arr, 3) <<endl;
    cout<<"Min element : "<<getMin(arr, 3) <<endl;

}