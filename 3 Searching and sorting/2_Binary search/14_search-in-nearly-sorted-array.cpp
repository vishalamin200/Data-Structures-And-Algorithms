// search element in a nearly sorted array

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &vect, int target){
    int size = vect.size();
    int s=0 , e = size-1 , mid = s + (e-s)/2;

    while(s<=e){
        if(vect[mid] == target){
            return mid;
        }
        if (vect [mid+1] == target){
            return mid+1;
        }
        if(vect[mid-1] == target){
            return mid-1;
        }
        else if(target > vect[mid]){
            s = mid + 2;
        }
        else{
            e = mid-2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    // vector<int> vect = {10,3,15,25,20,35,30,40};
    vector<int> vect = {20,10};
    int target;
    cout<<"Enter target : ";
    cin>>target;
    cout<<"Index of target is : "<<search(vect, target);

    return 0 ;
}