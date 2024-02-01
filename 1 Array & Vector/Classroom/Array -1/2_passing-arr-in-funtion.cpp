//passing an array in a function  , it always will be pass by reference

#include<iostream>
using namespace std;

void updateArray(int brr[], int size){
    brr[0] =10;
    brr[1] =20;
    brr[2] =30;
}
int main(){
    int arr[] = {1,2,3};
    updateArray(arr, sizeof(arr));

    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}