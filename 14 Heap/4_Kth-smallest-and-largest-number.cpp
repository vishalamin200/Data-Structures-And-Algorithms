// find the Kth smallest number

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;


// first approach : sort array, and (k-1)th element is kth smallest
// time and space : T.C -> O(nlogn)  sp. O(n) for without sorting existing array

int  kthSmallest(vector<int>input , int k){

    sort(input.begin(),input.end());
    return input[k-1];
}

// second appoach : create min heap , remove k-1 elements, and then top element is kth smallest element
// time complexity : O(n)  , space complexity : O(n)


int minHeapApproach(vector<int>& input , int k){
    priority_queue<int,vector<int>, greater<int> > minHeap;

    // push all the element in the heap
    for(int i =0 ; i<input.size() ;i++){
        minHeap.push(input[i]);
    }

    // pop k-1 elements from the min heap
    for(int i=0 ; i<k-1 ;i++){
        minHeap.pop();
    }

    //print top element , or return kiya
    return minHeap.top();
}


// best approach by using max heap

// Insert K element in max heap , insert rest elements if it is smaller than top

int maxHeapApproach(vector<int>& input , int k){
    
    // insert first k elements in the max heap
    priority_queue<int> maxHeap;
    
    for(int i=0 ;i<k ;i++){
        maxHeap.push(input[i]);
    }

    // from rest element if element is smaller than pop the top element and push it in max heap
    for(int i= k ; i<input.size() ;i++){
        int ele = input[i];
        if(ele < maxHeap.top()){
            maxHeap.pop();
            maxHeap.push(ele);
        }
    }

    return maxHeap.top();
}

// time complexity : O(n)  , space cmplexity : O(k)


// we will find the kth largest using minHeap

int largestByMinHeap(vector<int> &input, int k){
    priority_queue<int,vector<int>,greater<int> > pq;
    // Insert kth elements in min heap 
    for(int i=0 ; i<k ;i++){
        pq.push(input[i]);
    }

    for(int i=k ; i<input.size() ;i++){
        int ele = input[i];
        if(ele > pq.top()){
            pq.pop();
            pq.push(ele);
        }
    }

    return pq.top();
}




int main(){
    int k;
    vector<int> input = {43,3,5,65,33,67,37,9};
    cout<<"Enter K : ";
    cin>>k;

    cout<<"Kth smallest : "<<kthSmallest(input,k)<<endl;
    cout<<"Kth smallest : "<<minHeapApproach(input,k)<<endl;
    cout<<"Kth smallest : "<<maxHeapApproach(input,k)<<endl;


    cout<<"Kth Largest : "<<largestByMinHeap(input,k)<<endl;
    
    return 0 ;
}
