// optimised O(nlogn)    , and brut force solution O(n^2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//brut force solution (n^2)
void pairSum(vector<int>arr  ,int key){
    cout<<"\n\n";
    for(int i =0 ; i<arr.size() ; i++){
        for(int j= i+1; j<arr.size();  j++){
            if( arr[i] + arr[j] == key ){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}



// more optimised solution  (n log n)
int binary_search(vector<int>&arr , int key){                              // O(logn)
    int start = 0 , end = arr.size() -1 , mid = start + (end-start)/2;

    while(start <= end){ 
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int key;
    vector<int>arr = { 1,3,8,9,4,6,2,11};
    // vector<int>arr = { -3 , 4,3,90};
    cout<<"key = ";
    cin>>key;

    sort(arr.begin(), arr.end());

    for(int i =0 ; i<arr.size() ; i++){                 //n *logn = O(nlogn);
        int index = binary_search(arr, key-arr[i]) ;

        //arr[i]<= arr[index] this condition is used to not print the duplicate pairs , ie 1 11  , 11,1.
        // i!= index this condition is used to not to pring pair of same number , key 12 , 6,6
        if( index >=0 && arr[i]<=arr[index]   && i!=index){
            cout<<arr[i] <<" "<< arr[index]<<endl;
        }
    }

    pairSum(arr,key);

    return 0;
}