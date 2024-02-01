// Print the maximum and minimun element in an array 

#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i =0 ; i<size ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i =0 ; i<size ;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}



int main(){
    int arr[] = {6,2,3,41,-88,-4,102,0};
    int size = sizeof(arr)/sizeof(*arr);
    cout<<"Minimum element : "<<getMin(arr,size )<<endl;
    cout<<"Maximum element : "<<getMax(arr,size )<<endl;

    return 0;
}

