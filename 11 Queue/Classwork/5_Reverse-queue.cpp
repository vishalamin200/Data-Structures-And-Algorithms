// Reverse a Queue Approach -1 , 
// push all queue element from queue to stake and than push all element of the stack to the queue 

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printQueue(queue<int> og){
    while(!og.empty()){
        cout<<og.front()<<" ";
        og.pop();
    }
    cout<<"\n\n";
}

void reverseQueue(queue<int> &og){
    stack<int>st;
    while(! og.empty()){
        st.push(og.front());
        og.pop();
    }

    while(!st.empty()){
        og.push(st.top());
        st.pop();
    }
}

void reverseQueueByRecursion( queue<int>&q ){

    // Base case 
    if( q.empty()){
        return;
    }

    // Top element ko save karo , or pop kardo
    int top = q.front();
    q.pop();

    // recuse ko bolo remaining element ko 
    reverseQueueByRecursion(q);
    
    q.push(top);
}

int main(){
    queue<int> og;

    og.push(10);
    og.push(20);
    og.push(30);
    og.push(40);
    og.push(50);

    // printQueue(og);
    // reverseQueue(og);
    // printQueue(og);


    printQueue(og);
    reverseQueueByRecursion(og);
    printQueue(og);
    
     return 0 ;
}