// Reverse the stack

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(! st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}


void insertAtBottom(stack<int>&st , int& target){
    if(st.empty() == 1 ){
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st,target);

    //backtrack
    st.push(temp);
}

void reverseStack(stack<int>& st){
    if(st.empty() ){
        return;
    }

    // ek case solve karo baki recursion sambhal lega

    int target = st.top();
    st.pop();
 
    reverseStack(st);

    insertAtBottom(st,target);  
}



int main(){
    stack<int>st;

    st.push(9);
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(4);


    print(st);
    reverseStack(st);
    print(st);
    
    return 0 ;
}