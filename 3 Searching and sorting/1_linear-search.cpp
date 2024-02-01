// linear search    
// Worst Time comlexity = O(n) , best time Complexity = O(1)  , space complexity = O(1)

#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>&vect , int key){
    for(int i=0 ; i<vect.size() ; i++){
        if(key == vect[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    vector<int> vect = {6,4,2,7,1,5,3,12,8} ;
    int key;
    cout<<"Key = ";
    cin>>key;
    (linearSearch(vect,key)) ? cout<<"Key present" : cout<<"Key Not present";
    return 0 ;
}