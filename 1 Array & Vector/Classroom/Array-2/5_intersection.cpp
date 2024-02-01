// Intersection of two array  better optimsed
// complexity = nlogn + mlogm + (n+m)  == O(nlogn);

#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

//brut force solution
void intersection(vector<int>arr , vector<int>brr){            // here only copy of vector will pass , pass by value
    cout<<"\n\n";

    for(int i =0 ; i<arr.size() ;i++){
        for(int j=0 ; j<brr.size() ;j++){
            if(arr[i] == brr[j]){
                cout<<arr[i]<<" ";
                brr[j] = INT_MIN;
            }
        }
    } 

    cout<<"\n\n";
} 


// better opmitimised solution 
int main(){
    vector<int>arr = {2,4,4,4,6,8,65,43,21,32,54};
    vector<int>brr = {1,3,4,4,4,21,65,54,8,10,11,12,13,14};

    sort(arr.begin(),arr.end());                 // nlogn
    sort(brr.begin(), brr.end());                // mlogm 

    vector<int> ans;
    int i=0 , j=0 ;
    
    while(i<arr.size() && j<brr.size()){  // O(n+m)
        if( i>0 && arr[i] == arr[i-1]){
            i++;
            continue;
        }

        if(arr[i] < brr[j]){
            i++;
        }
        else if (arr[i] > brr[j]){
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }

    for(auto value : ans){
        cout<<value<<" ";
    }

    intersection(arr,brr);
    return 0;
}