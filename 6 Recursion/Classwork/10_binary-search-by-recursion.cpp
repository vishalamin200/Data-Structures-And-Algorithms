// Binary search using recursion

#include<iostream>
#include<vector>
using namespace std;

int BS (vector<int>& vect, int start , int end , int& key){
    int mid = start + (end-start)/2;
    //base candition
    if(start > end ){
        return -1;
    }

    // ek solve karo
    if(vect[mid] == key){
        return mid;
    }

    // baki recursion sambhal lega

    if(vect[mid] < key){
        //right me jao
        return BS(vect, mid+1 ,end, key);
    }
    else{
        //left me jao
        return BS (vect, start , mid-1 , key);
    }

}

int main(){
    vector<int> vect = {12,13,14,16,19,20,22,24};  // sorted array
    int start = 0; 
    int end = vect.size()-1;

    int key;
    cout<<"Enter key : ";
    cin>>key;

    int keyIndex = BS(vect, start , end , key);

    if(keyIndex == -1) cout<<"Key not present "<<endl;
    
    else  cout<<"Key is at Index : "<<keyIndex;
    return 0 ;
}