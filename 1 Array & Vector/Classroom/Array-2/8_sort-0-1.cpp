// sort 0 and 1  with linear time complexity and inplace ;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// brut force - sort the array using sort funtion or any other sorting algo : O(nlogn)

void print(vector<int>&arr){
    for(auto value : arr){
        cout<<value<<" ";
    }
    cout<<"\n\n";
}

void sorting(vector<int>arr){
    sort(arr.begin(), arr.end());     // O(n logn );
    print(arr);
}

void Two_pointer_approach(vector<int> arr){              // O(n)
    int start =0 , end = arr.size() -1;
    while(start<= end){
        if(arr[start] == 1){
            swap(arr[start], arr[end]);
            end --;
        }
        else{
            start++;
        }
    }
    print(arr);
}


// dutch national flag algorithm
// three pointer approach - dnf
void dnf(vector<int>arr){
    int start = 0  , end = arr.size() -1 , mid = 0;
    while(mid < end  ){
        if(arr[mid] == 1){
            swap(arr[mid], arr[end]);
            end--;
        }
        else{
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }
    }
    print(arr);
}

int main(){
    vector<int> arr = {1,0,0,1,1,1,0,0,1,0,1,0,1,0,1};
    //brut force 
    cout<<"Given array : ";print(arr);

    sorting(arr);
    Two_pointer_approach(arr);
    dnf(arr);

    return 0;
}
