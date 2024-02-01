//working of iteration in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5};

    // iterator declaration 
    vector<int>:: iterator it ;       // here it is a pointer pointing toward the first element 
    
    // printing the vector elements 
    for( it = arr.begin() ; it!= arr.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<"\n\n";

    // rbegin()  --> reverse iterator pointing last element  , rend() -> pointing previous of first element 
    for(auto iterator = arr.rbegin() ; iterator != arr.rend() ; iterator++){
        cout<<*iterator<<" ";
    }
    cout<<"\n\n";

    auto value = arr.begin()+2  ; 
    cout<< *value;

    return 0; 
}