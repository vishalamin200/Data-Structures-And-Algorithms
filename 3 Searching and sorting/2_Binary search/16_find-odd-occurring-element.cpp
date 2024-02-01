// find the odd occuring element in an array , all the pair are at adjucent side

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &vect){
    int start = 0 , end = vect.size() -1;
    int mid = start + (end-start)/2;


    while(start < end){
        if(mid % 2 == 0 ){
            if(vect[mid] == vect[mid+1]){
                start = mid+2;
            }
            else {
                end = mid;
            }
            mid = start + (end-start)/2 ;
        }
        else{
            if (vect[mid] == vect[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2 ;
        }
    }
    return mid;

}

int main(){
    // vector<int> vect = {4,4,5,2,2,9,9,1,1,6,6,3,3,1,1};
    vector<int> vect = {1,1,2,2,3,3,4,5,5,6,6};
    cout<<"odd occuring element is : "<<solve(vect);
    
    return 0 ;
}