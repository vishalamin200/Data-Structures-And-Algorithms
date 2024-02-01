// find the next smaller element of the each elements given in the input array

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmaller(vector<int>& input){
    stack<int> st;
    st.push(-1);
    vector<int> ans(input.size());

    for(int i=0 ; i<input.size()  ;i++){
        int arrElement = input[i];

        //top element of the stack is smaller , then the given number pop the stack
        while(st.top() > arrElement){
            st.pop();
        }

        // now we get the prev smaller number , so store it in ans and push that element

        ans[i] = st.top();
        st.push(arrElement);
    }

    return ans;
}

vector<int> nextSmaller(vector<int> &input){
    stack<int> st;
    st.push(-1);
    vector<int> ans(input.size());

    for(int i= input.size() -1  ; i>=0  ; i--){
        int arrElement = input[i];

        // jab tak top element , input wale element se chhota nai milta pop karo .
        while(st.top() > arrElement){
            st.pop();
        }

        // Now we get the smaller element  , so store it in ans , and push that element in the stack
        ans[i] = st.top();
        st.push(arrElement);
    }
    return ans;
}

void printVect(vector<int> &vect){
    for(int i=0 ; i<vect.size() ;i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl<<endl;
}

int main(){
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> next = nextSmaller(input);

    cout<<"printing next smaller elements : ";
    printVect(next);

    cout<<"printng previous smaller elements  :";
    vector<int>prev  = prevSmaller(input);
    printVect(prev);

    return 0 ;
}