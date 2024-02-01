// count the number of 0 , 1, and 2 in an array 

#include<iostream>
#include<array>
using namespace std;

int main(){
    array <int,13> arr = {0,0,0,2,1,1,2,2,1,1,1,0,2};
    int size = arr.size();

    int zeroCount =0 ; 
    int oneCount =0 ;
    int twoCount = 0;

    for(int i =0 ; i<size ;i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if(arr[i] == 1){
            oneCount++;
        }
        else if  (arr[i] == 2){
            twoCount++;
        }
    }

    cout<<"Zero : "<<zeroCount<<endl;
    cout<<"ONe : "<<oneCount<<endl;
    cout<<"Two : "<<twoCount<<endl;

    return 0;
}