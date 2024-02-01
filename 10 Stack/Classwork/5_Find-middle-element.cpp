// find the middle element in the stack

#include<iostream>
#include<stack>
using namespace std;

void getMiddle(stack<int>& st, int& originalSize){

    if(st.size() == originalSize/2 +1){
        cout<< st.top();
        return ;
    }


    int temp = st.top();
    st.pop();

    getMiddle(st,originalSize);

    st.push(temp);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int originalSize = st.size();
    getMiddle(st , originalSize);
    
    return 0 ;
}