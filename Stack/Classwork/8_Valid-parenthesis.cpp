//Check whether the parenthesis is valid or not
// eg.  (){}[]   -->valid 
// eg.  (({}))[]  -->valid
// eg.  [({ )}]  -->invalid

#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string& str){
    stack<char> st;

    for(int i=0 ; i<str.size() ; i++){
         char ch  = str[i];

        if(ch == '(' || ch == '{'  || ch == '['){
            st.push(ch);
        }
        else{

            if(st.empty()){
                return false;
            }
            char topch = st.top();
            // if top and the stack is opening brack and ch is same closing bracket the pop it

            if(ch== ')'  && topch == '('){
                st.pop();
            }

            else if(ch== '}'  && topch == '{'){
                st.pop();
            }

            else if(ch== ']'  && topch == '['){
                st.pop();
            }

            else{
                return false;
            }
        }

    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    stack<int>st ;
    
    string str ;
    cout<<"Enter the string : ";
    cin>>str;

    cout<<"Valid parenthesis : "<<validParenthesis(str);


    
    return 0 ;
}