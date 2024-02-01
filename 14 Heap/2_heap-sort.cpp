// heap sort
#include<iostream>
using namespace std;

void heapify(int arr[], int size, int index){
    int largest = index;
    int left = 2*index+1;
    int right= 2*index+2;

    if(left< size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right< size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest],arr[index]);
        index = largest;
        heapify(arr,size,index);
    }
    else{
        return;
    }   
}

void heapSort(int arr[],int size){
    // build heap
    for(int i= size/2 -1 ; i>=0 ; i--){
        heapify(arr,size,i);
    }

    // rearrange 
    while(size !=0 ){
        swap(arr[size-1],arr[0]);
        size--;

        heapify(arr,size,0);
    }
    
}

int main(){
    int arr[]= {54,2,21,43,38,22,64,36,4,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr,size);

    for(int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}