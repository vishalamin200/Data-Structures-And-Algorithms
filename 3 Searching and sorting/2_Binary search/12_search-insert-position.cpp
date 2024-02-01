/* Given a sorted array of distinct integers and a target  value, 
 return the index if the target is found. If not, return the index 
 where it would be if it were inserted in order. */

#include<iostream>
#include<vector>
using namespace std;

int getIndex(vector<int> &nums, int target){
    int start = 0 , end = nums.size() -1;
    int mid = start + (end-start)/2;
    int ans = -1 ;

    while(start <= end){
        if(nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            ans = mid +1 ; 
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,5,6,8,10,13,15,18};
    int target ;
    cout<<"Target : ";
    cin>>target;
    cout<<"Index : "<<getIndex(nums,target)<<endl<<endl;

    for(int n : nums){
        cout<<n<<" ";
    }

    return 0 ;
}