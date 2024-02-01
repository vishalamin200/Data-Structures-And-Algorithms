// heap or Priority Queue , it work as the mean heap in which parent node is smaller than it's childs
// Stl of heap is called priority queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max heap , stl
    priority_queue<int>pq;

    pq.push(50);
    pq.push(30);
    pq.push(80);
    pq.push(60);
    pq.push(40);

    cout<<"Top : "<<pq.top()<<endl;
    pq.pop();
    pq.pop();
    pq.pop();
    pq.pop();
    cout<<pq.top()<<endl;
  
   cout<<"Is empty : "<< pq.empty()<<endl;
   cout<<"Size = "<<pq.size()<<"\n\n\n";


   // Min heap stl
   priority_queue<int,vector<int>,greater<int> > minHeap;

   minHeap.push(30);
   minHeap.push(40);
   minHeap.push(80);
   minHeap.push(60);
   minHeap.push(50);

   cout<<"top : " <<minHeap.top()<<endl;
    minHeap.pop();
   cout<<"top : " <<minHeap.top()<<endl;
   


    /* Notes 
    int : integer data to store ;
    vector<int>  : container to store the data;
    greater<int> : comparator for min heap
    
    */
    
    return 0 ;
}