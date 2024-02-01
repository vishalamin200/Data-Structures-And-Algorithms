//find the minimum and maximum element in the array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void minMax(vector<int>&vect , int& size , int index , int& mini ,int&maxi){
    // base condition

    if(index >= size){
        return;
    }

    // processing 
    mini = min(mini , vect[index]);
    maxi = max(maxi , vect[index]);
    
    // recursive call
    minMax(vect, size, index+1 , mini ,maxi);
}



int main(){
    vector<int> vect = {12,13,1,54,99,3,23,43,2,11,-22,105};
    int size = vect.size();
    int index =0 ; 

    int min  = INT_MAX;
    int max  = INT_MIN;
    minMax(vect,size ,index ,min,max);


    cout<<"minimum element is : "<<min<<endl;
    cout<<"maximum : "<<max<<endl;

    return 0 ;
}