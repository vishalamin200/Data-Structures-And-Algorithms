// using stack reverse a string


#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "Vishal";
    stack<char>st;

    for(int i=0 ; i<str.size() ;i++){
        char ch = str[i];

        st.push(ch);
    }

    while( ! st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0 ;
}