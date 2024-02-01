// bubble sort  -- used when we need to sort the ith maximum element 
// time complexity : best = O(n)   ; worst = O(n^2)
// space complexit : O(1)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vect = {9,8,6,5,4,3,3,2,2,2,1};
    int size = vect.size();
    bool flag = false;

    // in each round max element will be at their position at end
    for(int round =1 ; round<size ; round++){
        for(int j =0 ; j< size - round  ;j++){
            if(vect[j+1] < vect[j]){
                swap(vect[j+1], vect[j]);
                flag = true;
            }
        }

        if(flag == false){
            break;
        }
    }
   
    for(auto value : vect){
        cout<<value<<" ";
    }
 
    return 0 ;
}