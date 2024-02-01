// Reverse a given array 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = { 1,2,3,4,5,6,7,8};
    int start =0 , end = arr.size() -1;

    while(start <= end){
        swap(arr[start++], arr[end--]);
    }
    
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}