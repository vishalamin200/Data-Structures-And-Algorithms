//merge sort

#include<iostream>
using namespace std;

void merge(int* arr, int start , int end){
    int mid = start + (end-start)/2;



   int leftSize = mid-start+1;
    int* leftArray = new int[leftSize];

    // copy into
    for(int i=0 ; i<leftSize  ;i++){
        leftArray[i] = arr[start+i];
    }


    int rightSize = end-mid;
    int* rightArray = new int[rightSize];

    for(int j=0 ; j<rightSize ;j++){
        rightArray[j] = arr [mid+1+j];
    }

    int i=0 , j=0;
    int k=start;
    while(i< leftSize  && j<rightSize) {
        if(leftArray[i] <= rightArray[j]){
            arr[k++] = leftArray[i++];
        }
        else{
            arr[k++]  = rightArray[j++];
        }
    }

    while(i<leftSize){
        arr[k++]  = leftArray[i++];
    }

    while(j<rightSize){
        arr[k++]  = rightArray[j++];
    }

}

void mergeSort(int* arr, int start , int end){
    // mid find karo
    int mid = start + (end-start)/2;
    if(start == end){
        return ;
    }
    

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    // int arr[] = {43,54,21,-2,20,65,3,88,3,23,66};
    int arr[] = {1,2};

    int size = sizeof(arr)/sizeof(*arr);

    int start =0 ; 
    int end = size-1;
    mergeSort(arr,start ,end);

    for(int i=0 ; i<size ;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}