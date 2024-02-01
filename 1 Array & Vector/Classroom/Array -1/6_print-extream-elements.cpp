// print the extream elements of an array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = sizeof(arr)/sizeof(*arr);

    int start = 0 , end = size-1; 
    while(start <= end){
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;
    }
}