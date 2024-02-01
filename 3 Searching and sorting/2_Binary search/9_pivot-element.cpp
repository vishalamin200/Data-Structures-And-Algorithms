// find the pivot element  , if you have given an array ,which may or may not be rotated . 

#include<iostream>
#include<vector>
using namespace std;

// better code than other for pivot ,

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
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    // vector<int> vect = {3,4,5,6,7,1,2};
    // vector<int> vect = {2,3,4,5,6,7,1};
    // vector<int> vect = {1};
    vector<int> vect = {1,2,3,4,5,6,7,8};


    int index = getPivot(vect);
    cout<<"Index : "<<index <<endl ;
    cout<<"Pivot element : "<<vect[index]<<endl;
    return 0 ;
}