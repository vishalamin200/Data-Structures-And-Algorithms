// Insertion sort   --> used in half sorted array , partially sorted array
// time complexity : best : O(n)   , worst : O(n^2)

// in this algorithm we will insert the each element at it's right place

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vect = {10,9,7,4,2,43};
    int size = vect.size();


    for(int i =1 ; i<size ; i++){
        int temp = vect[i];

        int j;
        for(j = i-1 ; j>=0 ; j--){
            if(temp <vect[j]){
                vect[j+1] = vect[j];
            }
            else{
                break;
            }
        }
        vect[j+1] = temp;
    }

    for(auto value : vect){
        cout<<value<<" ";
    }
    
    return 0 ;
}