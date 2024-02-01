//find the minimum number of coins required to make the target sum

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int coinChange(vector<int>& coins , int& size, int n,unsigned long long& count){
    if(n==0){
        return 0;
    }
    if(n <0){
        return INT_MAX;
    }

    int mini = INT_MAX;
    // ek case solve karo
    for(int i=0 ; i<size ; i++){
        int ans = coinChange(coins,size , n - coins[i],++count);
        mini = min(mini,ans);
    }

    if(mini != INT_MAX){
        return  1+mini;
    }
}

int main(){
    vector<int> coins = {10,15,5,3,2,7,6};
    int size = coins.size();

    int target ;
    cin>>target;
    unsigned long long count =0;

    int miniCoin = coinChange(coins,size,target, count) ;
    if(miniCoin == INT_MAX){  // in case of target less than smallest coin
        miniCoin =0 ;
    }
    cout<<"count = "<<count<<endl;

    cout<<"Minimum number of coins required  : "<<miniCoin<<endl;

    return 0 ;
}