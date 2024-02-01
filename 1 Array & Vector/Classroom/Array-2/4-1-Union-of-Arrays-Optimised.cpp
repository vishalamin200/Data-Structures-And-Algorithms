// optimised way for union to arrays
// Space complexity O(nlogn);

#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int binary_search(vector<int>& arr, int key){
    int start = 0  ,end = arr.size() -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]  == key ){
            return mid;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

void print(vector<int>&vect){
    for(auto value : vect){
        cout<<value<<" ";
    }
    cout<<"\n\n";
}

int main(){
    vector<int>arr = {2,4,6,8,65,43,21,32,54};
    vector<int>brr = {1,3,4,21,65,8,10};
    sort(arr.begin(),arr.end());                 // nlogn
    sort(brr.begin(), brr.end());

    for(int i =0 ; i<arr.size() ; i++){           // n*logn
        int index = binary_search(brr,arr[i]);   //log n  
        if(index>=0){
            brr[index] = INT_MIN;
        }
    }
    
    vector<int>ans;
    for(int i=0 ; i<arr.size(); i++){    //1*n = O(n);
        ans.push_back(arr[i]);     //O(1)
    }
    for(int j=0 ; j<brr.size() ;j++){
        if(brr[j] == INT_MIN){
            continue;
        }
        else{
            ans.push_back(brr[j]);
        }
    }

    sort(ans.begin(),ans.end());
    print(ans);


}