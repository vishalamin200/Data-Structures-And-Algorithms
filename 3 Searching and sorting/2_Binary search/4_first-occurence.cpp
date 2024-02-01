// find the index of the first occurence of an element 

#include<iostream>
#include<vector>
#include<algorithm>
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

int main(){
    vector<int>vect = {1,3,5,5,5,7,7,9,9,10};
    int key;
    cout<<"key = ";
    cin>>key;

    cout<<"First occurence of "<<key<<" is at index : "<<firstOccurence(vect, key) <<endl;


    // using STL funtion
    vector<int> :: iterator firstOcc ; 
    firstOcc = lower_bound(vect.begin() , vect.end(), key);    // here firstOcc is an iterator {iterator is like a memrory address}
    cout<<  firstOcc - vect.begin() ; 
    
    return 0 ;
}