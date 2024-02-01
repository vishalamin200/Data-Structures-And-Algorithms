// Quick sort

#include<iostream>
using namespace std;

void quickSort(int* arr,int size, int start , int end){
    // base case
    if(start >= end){
        return ;
    }

   // Take a pivot element and put it at it's right position 
   // remeber start counting from next element 

    int pivot = arr[start];
    int count =0;
    
    for(int i=start+1 ; i<= end ; i++){
        if(arr[i] <=pivot){
            count++;
        }
    }

    // correct place of pivot place is start+count
    int pivotIndex = start+count;

    swap(arr[start] , arr[pivotIndex]);
    int i= start; 
    int j = end;

    // left me chote aur right me bade element karo
    while(i< (pivotIndex)  && j>(pivotIndex)){
        if(arr[i] <= pivot){
            i++;
        }
        else if(arr[j] > pivot){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }

    quickSort(arr,size,start,(pivotIndex-1));
    quickSort(arr,size,(pivotIndex+1),end);
}

int main(){
    int arr[] = {5,1,1,2,0,0};
    int size = sizeof(arr)/sizeof(*arr);

    int start =0;
    int end = size-1;
    quickSort(arr,size,start , end);

    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<"  ";
    }
    return 0 ;
}