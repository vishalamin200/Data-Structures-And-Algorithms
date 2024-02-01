// find the maximum area of the histogram

#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;


// we have return the indexes of the prev and next smaller element 

vector<int> prevSmaller(vector<int>& input){
    int size = input.size();
    stack<int> st;
    st.push(-1);
    vector<int> ans(input.size());

    for(int i=0 ; i<input.size()  ;i++){
        int arrElement = input[i];

        //top element of the stack is smaller , then the given number pop the stack
        while(st.top() != -1  && input[st.top()] > arrElement){
            st.pop();
        }

        // now we get the index prev smaller number , so store it in ans and push that element

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> nextSmaller(vector<int> &input){
    int size = input.size();
    stack<int> st;
    st.push(-1);
    vector<int> ans(input.size());

    for(int i= input.size() -1  ; i>=0  ; i--){
        int arrElement = input[i];

        // jab tak top element , input wale element se chhota nai milta pop karo .
        while(st.top() != -1  && input[st.top()] > arrElement){
            st.pop();
        }

        // Now we get the smaller element  , so store it in ans , and push that element in the stack
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int  largestRectangleInHistogram(vector<int>& heights){
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);
    int size = heights.size();
    int maxArea = INT_MIN;

    for(int i=0 ; i<heights.size()  ;i++){
        int length = heights[i];
        
        if(next[i] == -1){
            next[i] = size;
        }

        int width = next[i] - prev[i] -1;
        int area = length* width;
        maxArea = max(maxArea , area);
    }

    return maxArea;
}

int main(){
    // vector<int> v = {2,1,5,6,2,3};
    vector<int> v = {2,4};


    cout<< largestRectangleInHistogram(v);
    
    return 0 ;
}