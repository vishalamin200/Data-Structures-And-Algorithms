// every elements occures twice, only one element occures once , return that UNIQUE element 

#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int>&arr){
    int uniq =0 ;
    for(int i =0  ; i<arr.size() ; i++){
        uniq = uniq^arr[i];
    }
    return uniq;
}


int main(){
    vector<int>arr = {0,2,6,3,6,0,2};
    cout<<"Unique element : "<<unique(arr);
    return 0;
}