// binary search using STL

// remember that : binary search stl return 1 when element exist and 0 when don't exist ;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // in vector
    vector<int> vect = {1,4,7,9,11,13,16,18};
    int key;
    cout<<"key = ";
    cin>>key;

    binary_search(vect.begin() , vect.end() , key)  ? cout<<"Present \n" : cout<<"Not present \n";

    // in array
    int arr[] = {1,3,8,9,11,14,17,19};
    int size = sizeof(arr)/sizeof(arr[0]);

    binary_search( arr , arr+size , key)  ? cout<<"Present \n" : cout<<"Not present \n";
    return 0 ;
}