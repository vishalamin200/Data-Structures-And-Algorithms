// Reverse an array 
#include<iostream>
using namespace  std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(*arr);

    int st = 0 , end = size-1;
    
    while(st <= end){
        swap(arr[st++],arr[end--]);
    }

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}