// triplet sum 

#include<iostream>
#include<vector>
using namespace std;

//brut force , worst solution  O(n^3)
void tripletSum(vector<int> arr , int key){
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=i+1 ; j<arr.size()  ; j++){
            for(int k= j+1 ; k<arr.size() ; k++){
                if(arr[i] + arr[j] +arr[k] == key){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int key ;
    cout<<"Key = ";
    cin>>key;
    vector<int> arr(10000,0) ;
    arr[999] = -1;
    arr[998] =-1;
    arr[997] = -1;

    for(auto value : arr){
        if(value ==0 ){
            continue;
        }
        // cout<<value;
    }
    tripletSum(arr,key);

    return 0;
}