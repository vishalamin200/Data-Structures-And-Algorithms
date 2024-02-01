#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int,vector<int> > maxHeap;
        int sum =0 ;

        // Insert all element of array in Heap
        for(int i=0 ; i<piles.size() ; i++){
            maxHeap.push(piles[i]);
            sum += piles[i];
        }

        // Ab hame max element mila, ab usko half karke substract karna hai, 
        while(k--){
            int maxValue = maxHeap.top();
            maxHeap.pop();
            int value = maxValue - maxValue/2;
            sum -= maxValue/2;

            maxHeap.push(value);
        }

        return sum;    
}

int main(){
    vector<int> piles = {21,32,43,5,3,76,4,52};
    int k = 3;

    cout<<"Minimised cost after applying operation k time : "<<minStoneSum(piles,k);
    
    return 0 ;
}
