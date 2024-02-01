// find the maximum sum of the non adjecent element

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void maxSum(vector<int>& vect , int& size , int index, int sum , int& maxi){
    //base case
    if(index >= size){
        maxi = max(maxi,sum);
        return;
    }

    // exclude
    maxSum(vect,size,index+1, sum,maxi);

    //include
    maxSum(vect,size,index+2,sum+vect[index],maxi);
    
}

int main(){
    vector<int> vect = {8,4,7,10};
    int size = vect.size();
    int index = 0;
    int maxi = INT_MIN;
    int sum =0;

    maxSum(vect, size,index ,sum , maxi);
    cout<<"Max sum = "<<maxi;
    return 0 ;
}