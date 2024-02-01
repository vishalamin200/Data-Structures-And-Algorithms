// Binary search 
// best time complexity = O(1)  , worst time complexity = O(logn)
// space complexity = O(1);

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&vect , int key){
    int start =0 , end = vect.size()-1 ; 
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

int main(){
    vector<int> vect = {1,3,5,7,11,16,19} ;   // already sorted
    int key;
    cout<<"Key = ";
    cin>>key;
    cout<<binarySearch(vect, key);
    return 0 ;
}