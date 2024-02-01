// Interleave first and second half of the queue

// ex : 1,2,3,4,5   ->  1 4 2 5 3

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printQueue(queue<int> q){
    while(! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<endl;
}

void interleaveHalfs(queue<int> &oq){
    int size = oq.size() ;
    if(oq.empty()){
        return;
    }
    
    int mid = size/2;
    
    // step 1 : transfer half of the queue elements in another queue NQ

    queue <int >nq ;
    int count = mid;

    while(count--){
        nq.push(oq.front());
        oq.pop();
    }

    while(!nq.empty()){
        oq.push(nq.front());
        nq.pop();

        oq.push(oq.front());
        oq.pop();
    }

    if(size & 1){
        oq.push(oq.front());
        oq.pop();
    }
}



int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    // q.push(80);

    printQueue(q);
    interleaveHalfs(q);
    
    printQueue(q);

    return 0 ;
}

