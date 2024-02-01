// given a sorted an rotated array , return the index of the key , note: array may or may not be rotated . 

#include<iostream>
#include<vector>
using namespace std;



int binarySearch(vector<int>&vect , int start, int end , int key){ 
    int mid = start + (end-start)/2;

    while(start <= end){
        if(vect[mid] == key){
            return mid;
        }

        else if (vect[mid] < key){
            start = mid +1;
        }
        
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}


int getPivot(vector<int> &vect){
    int size = vect.size();
    int start = 0 , end= size-1;
    int mid = start + (end-start)/2 ;
    while(start < end){
        if(vect[mid] > vect[mid+1]){
            return mid;
        }
        else if ( vect[mid] < vect[0]){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);

        if(target >= nums[0]  && target<= nums[pivot]){
            return binarySearch(nums, 0 , pivot , target );
        }
        else{
            return binarySearch(nums, pivot+1 , nums.size()-1 , target );
        }
    }


int findElement(vector<int>&vect , int key ){
    int pivot = getPivot(vect);

    if(key>= vect[0]  && key<= vect[pivot]){
        // here we pass , the range ,
        return  binarySearch(vect,0,pivot, key);
    }
    else{
        return  binarySearch(vect,pivot+1,vect.size()-1, key);
    }

}

int main(){
    vector<int> vect = {8,1};
    int key;
    cout<<"Key = ";
    cin>>key;

    findElement(vect,key)? cout<<"Present\n" : cout<<"Not present\n";
    cout<<"Index of key is "<<search(vect,key);

    return 0 ;
}


