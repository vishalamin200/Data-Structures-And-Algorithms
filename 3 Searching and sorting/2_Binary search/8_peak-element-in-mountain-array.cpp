// find the peak element in the mountain array

#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> &vect ){
    int size = vect.size();
    int start = 0 , end = size-1;
    int mid = start +(end-start)/2;

    while(start < end){
        if(vect[mid]>vect[mid+1] && vect[mid]> vect[mid-1]){
            return mid;
        }
        else if (vect[mid] > vect[mid-1]){
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}


int main(){

    vector<int> vect = {1,4,11,11,12,8,3,2,1};
    int index = peakElement(vect);
    cout<<"index : "<<index<<endl<<"Element : "<<vect[index]<<endl;

    return 0 ;
}