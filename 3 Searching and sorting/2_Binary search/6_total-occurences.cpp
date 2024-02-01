// find the total number of occurence of an element  tc = O(logn)

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>&vect , int key){
    int start =0 , end = vect.size()-1 ; 
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(vect[mid] == key){
            ans = mid;
            end = mid-1;
        }

        else if (vect[mid] < key){
            start = mid +1;
        }

        else if (vect[mid] > key){
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(vector<int>&vect , int key){
    int start =0 , end = vect.size()-1 ; 
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(vect[mid] == key){
            ans = mid;
            start = mid+1;
        }

        else if (vect[mid] < key){
            start = mid +1;
        }

        else if(vect[mid] > key) {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>vect = {1,3,5,5,5,7,7,9,9,10};
    int key;
    cout<<"key = ";
    cin>>key;

    int total;
    if(firstOccurence(vect, key) == -1) {
        total = 0;
    }
    else{
        total = lastOccurence(vect ,key) - firstOccurence(vect, key) + 1;
    }
    cout<<"total number of  occurence of "<<key<<" is : "<<total <<endl;
    
    return 0 ;
}