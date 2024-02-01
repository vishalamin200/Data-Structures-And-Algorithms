// pointer in function and double pointer

#include<iostream>
using namespace std;

void solve (int* arr){
    cout<<"size : "<<sizeof(arr)<<endl;
    cout<<"Address of arr (inside solve fn) : "<<&arr<<endl;
}

void update(int* a, int* b){
    *a = 100;
    *b = 200;
}

int main(){
    int arr[5] = {1,2,3,4};
    cout<<"Size of array : "<<sizeof(arr)<<endl;
    cout<<"Address of arr(inside main fn) : "<<arr<<endl;
    solve(arr);


    int *p = &arr[1];
    int *q = &arr[2];
    update(p,q);
    //print arr
    for(int value : arr){
        cout<<value<<" ";
    }
    return 0 ;
}

