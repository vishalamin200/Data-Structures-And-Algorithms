// return the union of an array 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// brut force approach 
//passig arrays by reference ;
int union_(vector<int>&arr, vector<int>&brr){
    for(int i=0 ; i<arr.size(); i++){      // n*n = O(n^2);

        for(int j=0 ; j<brr.size() ; j++){
            if(arr[i] == brr[j]){
                brr[j] = INT_MIN;
            }
        }

    }

    for(int i=0 ; i<brr.size() ; i++){
        if(brr[i] == INT_MIN){
            continue;
        }
        else{
            arr.push_back(brr[i]);
        }
    }
}


int main(){
    vector<int>arr1 = {2,4,6,8,10,13,15,17};
    vector<int>arr2 = {1,3,5,12,13,15,4};

    union_(arr1,arr2);
    for(auto value: arr1){
        cout<<value<<" ";
    }

    return 0;
}