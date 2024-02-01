// sort the stack 


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

void insertSorted(stack<int>& st, int& target){

    if(st.empty()){
        st.push(target);
        return;
    }

    if(target >= st.top()){
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    insertSorted(st,target);

    // back track
    st.push(temp);
}

void sortStack(stack<int>& st){

    // base case
    if(st.empty()){
        return;
    }

    // ek element ko sort me insert kardo , baki recursion kar dega

    int target = st.top();
    st.pop();

    sortStack(st);
    insertSorted(st,target);
}



int main(){
    stack<int>st;

    st.push(9);
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(4);


    print(st);

    sortStack(st);

    print(st);
    
    return 0 ;
}