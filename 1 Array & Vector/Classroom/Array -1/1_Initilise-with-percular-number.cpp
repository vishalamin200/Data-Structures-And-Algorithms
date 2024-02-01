#include<iostream>
#include<algorithm>
#include<array>
#include<cstring>
#include<vector>
using namespace std;

int main(){
    //initialising 
    int arr[10] = {0};
    int brr[5] = {1,2,3,4,5};
    
    //intilising an array in another way .
    array <int,7> crr = {1,6,5,3,5,3,4};


    // printing of the array
    // all ten elements will be 0 ;
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;


    // memset funtion    memset(array_name , value , array_size);   it only initilise the value with 0 or -1
    memset(brr, -1 ,sizeof(brr));

    for(auto i: brr){
        cout<<i<<" ";
    }
    cout<<endl;


   // initilise the array with any number using    arr.fill()   funtion 
    crr.fill(12);
    for(auto i: crr){
        cout<<i<<"  ";
    }
    cout<<endl;

    return 0;
}