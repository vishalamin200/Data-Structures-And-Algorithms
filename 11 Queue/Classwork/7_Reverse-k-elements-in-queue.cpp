// Reverse K elements in the queue

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


void reverseK_elements(queue<int> &q , int size , int k){

    // Edge case 
    if(k <= 0 || k > q.size()){
        return ;
    }

    // ek case khud solve karo 
    // step 1 : pop and reverse k element , and push these reversed elements in the queue

    if(size < k){
        int count = size;
        while(count--){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }

        return ;
    }

    else{
        stack<int> st;
        int count = k;
        while(count--){
            int temp = q.front();
            q.pop();
            st.push(temp); 
        }

        while(!st.empty()){
            q.push(st.top()) ;
            st.pop();
        }
    }

    // baki case recursion solve kar dega
    reverseK_elements(q, size-k, k);
}

int main(){
    int n,k;
    queue<int>q ;

    cout<<"Enter n = "; cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0 ; i<n  ;i++){
        int temp ; 
        cin>>temp;
        q.push(temp);
    }

    printQueue(q);
    cout<<"Enter K : ";
    cin>>k;
    reverseK_elements(q , q.size() , k);

    printQueue(q);

    return 0 ;
}