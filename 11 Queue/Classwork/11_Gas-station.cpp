// Leetcode 131 
/*There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next 
(i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the 
circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be 
unique
*/

#include<iostream>
#include<vector>
using namespace std;

int gasStation(vector<int>& gas , vector<int>& cost){
    int balance =0 ;
    int deficit = 0 ;
    int front =0;

    for(int i=0 ; i<gas.size() ; i++){
        balance += gas[i] - cost[i];

        if(balance <0){
            deficit += abs(balance);
            balance =0 ;
            front= i+1;
        }
    }

    if(balance >= deficit){
        return front;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int> Gas = {1,2,3,4,5};
    vector<int> Cost ={3,4,5,1,2};

    cout<<"Answer : "<<gasStation(Gas,Cost);
    
    return 0 ;
}