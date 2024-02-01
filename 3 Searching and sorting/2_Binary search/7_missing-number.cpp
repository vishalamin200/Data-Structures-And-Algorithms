// find missing element . size of an array is n , and total of n+1 elements can be present , you have to find the missing element 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingElement(vector<int> &vect ){
    int start =0 , end = vect.size()-1;
    int mid = start + (end-start)/2;

    while(start<end){

        if(vect [mid] == mid+1){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start+1;
}

int MissingNumber(vector<int>& vect) {
    int size = vect.size() ;
        
    int sum = ((size+1)*(size+2) )/2;
    for(int i =0; i<size; i++){
        sum -= vect[i];
    }
    return sum;
}
         
int main(){
    int size ;
    vector<int> vect = {1,2,3,4,5,7,8,9,10,11};   

    cout<<"Missing element is : "<<missingElement(vect)<<endl;
    cout<<"missing Number  is : "<<MissingNumber(vect)<<endl;
    
    return 0 ;
}