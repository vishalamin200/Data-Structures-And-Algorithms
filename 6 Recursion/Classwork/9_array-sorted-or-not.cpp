// check whether array is sorted or not ?

#include<iostream>
#include<vector>
using namespace std;

bool checkSorted ( vector<int>& vect, int& size , int index){
    //base condition
    if(index == size-1){
        return true;
    }

    //ek solve karo
    if(vect[index] > vect[index+1]){
        return false;
    }

    // baki recursion sambhal lega
    return checkSorted(vect, size , index+1 );
}

int main(){
    vector<int> vect = {12,13,15,26,16,18,1,21};
    // vector<int> vect = {12,13,15,16,18,21,25};
    // vector<int> vect = {12,12,12};


    int size = vect.size();
    int index =0 ;

    checkSorted(vect,size ,index) ? cout<<"Sorted " : cout<<"Not sorted "<<endl;

    return 0 ;
}