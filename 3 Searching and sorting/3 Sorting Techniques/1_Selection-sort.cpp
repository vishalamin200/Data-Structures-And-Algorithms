// Selection sort  -- mainly used in short array
// Time Complexity : best = O(n^2)  , worst = O(n^2)
// space complexity : O(1);


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {9,6,5,3,3,2,1};
    int size = arr.size();

    // we will select the minimum element from the ith to size-1 th position and swap with ith position
    for(int i=0 ; i<size ;i++){
        int minIndex = i;
        for(int j = i+1 ; j<size ; j++ ){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    
    for(auto value : arr){
        cout<<value<<" ";
    }
    return 0 ;
}