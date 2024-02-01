// sliding window maximum 
/*You are given an array of integers nums, there is a sliding window of size k 
which is moving from the very left of the array to the very right. 
You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.
*/

#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>&nums , int k){ 
    deque<int> dq;
    vector<int> ans;
    
    // initial window : 
    for(int i=0 ; i<k ; i++){
        while(!dq.empty() && nums[dq.back()] < nums[i]){
            dq.pop_back();
        }

        // push the current element index
        dq.push_back(i);
    }

    // store the answer of first window
    ans.push_back(nums[dq.front()]);


    // slide the window 
    for(int i =k ; i<nums.size() ; i++){
        // Remove the outof index element 
        if(!dq.empty() && i-dq.front() >=k){
            dq.pop_front();
        }

        // remove element smaller than current element
        while(!dq.empty() && nums[dq.back()] < nums[i]){
            dq.pop_back();
        }

        // store the index of the current element 
        dq.push_back(i);

        // store in the answer
        ans.push_back(nums[dq.front()]);      
    }

    return ans;
}


int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    vector<int> ans = maxSlidingWindow(nums , k );
    for (auto x:ans){
        cout<<x<<" ";
    } 
    return 0 ;
}
