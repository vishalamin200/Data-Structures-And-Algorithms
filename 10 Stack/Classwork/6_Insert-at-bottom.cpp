// Insert the top most element at the bottom


#include<iostream>
#include<stack>
using namespace std;

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


void solve(stack<int>& st){
    int target = st.top();

    if(! st.empty()){
        st.pop();
    }
    else{
        cout<<"Stack is empty "<<endl;
    }

    insertAtBottom(st,target);
}

void print(stack<int> st){
    while(! st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    stack<int>st;
    st.push(45);
    st.push(7);
    st.push(15);
    st.push(35);
    st.push(15);
    st.push(8);

    print(st);

    solve(st);

    print(st);
    
    return 0 ;
}