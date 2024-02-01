// Union of two array  better optimsed
// complexity = nlogn + mlogm + (n+m)  == O(nlogn);

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int>arr = {2,4,4,4,6,8,65,43,21,32,54};
    vector<int>brr = {1,3,4,4,21,65,54,8,10,11,12,13,14};
    sort(arr.begin(),arr.end());                 // nlogn
    sort(brr.begin(), brr.end());                // mlogm 

    vector<int> ans;
    int i=0 , j=0 ;
    
    while(i<arr.size() && j<brr.size()){  // O(n+m)
        
        // below if is used to not to print the same elements twice ;
        if(i>0 &&  arr[i] == arr[i-1])   {
            i++;
            if(arr[i] == brr[j]){
                j++;
            }
            continue;
        }
        
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else if (arr[i] > brr[j]){
            ans.push_back(brr[j]);
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
    return 0;
}