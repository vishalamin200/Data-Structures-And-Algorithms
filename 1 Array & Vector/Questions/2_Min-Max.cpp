#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int getMax(vector<int>&arr , int size){
    int max = INT_MIN;
    for(int i=0 ; i<size ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(vector<int>&arr , int size){
    int min = INT_MAX;
    for(int i=0 ; i<size ;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    vector<int> brr = {21,32,43,-48,-87 ,102,25,65};
    int size = brr.size();

    cout<<"Max element : "<<getMax(brr, size)<<endl;
    cout<<"Min element : "<<getMin(brr, size);

    return 0;
}