// linear search    time complexity :  best - O(1) , worst- O(n)  ,  space complexity : O(1)

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,8> arr {1,2,3,4,5,6,7,8};
    int key ;
    cout<<"Enter key : ";
    cin>>key;
    bool flag = 0;

    for(int i =0 ; i<sizeof(arr) ; i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }

    (flag == 1)? cout<<"Element Found " :  cout<<"Element not found ";
    return 0;
}