// Traverse the array using recursion

#include<iostream>
#include<vector>
using namespace std;

void printVect(vector<int>&vect ,int size , int index){
    //base condition
    if(index >= size ){
        return;
    }

    // ek print karo
    cout<<vect[index]<<" ";

    // baki recursion sambhal lega
    printVect(vect , size , index+1);
}

int main(){
    vector<int> vect = {4,3,12,43,21,76,42};

    // printing the Array
    int index = 0;
    int size = vect.size();

    printVect(vect ,size ,index);
    return 0 ;
}