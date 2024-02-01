#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> firstNegNumberInSlidingWindow(int arr[] , int size , int k){
    deque<int> q;
    vector<int> ans;

    // Process the first k element 
    for(int i=0 ; i<k ;i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    }

    if(q.empty()){
            ans.push_back(0);
    }
    else {
        int temp = arr[q.front()];
        ans.push_back(temp);
    }

    //sliding the current window 
    for(int i=k ; i<size ; i++){

        // remove out of window element 
        if(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }

        // add new in window elements
        if(arr[i] <0){
            q.push_back(i);
        }

        //save the answer of the current window
        if(q.empty()){
            ans.push_back(0);
        }
        else {
            int temp = arr[q.front()];
            ans.push_back(temp);
        }
    }

    return ans;
}

int main(){
    int arr[] = {10,-1,8,-7,-4,9,10,20};
    int size = sizeof(arr)/sizeof(*arr);
    vector<int> ans = firstNegNumberInSlidingWindow(arr,size,3);

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
    return 0 ;
}