// check whether the brackage is redundant or not

// redundant bracket are those brackets which are unnecessary 

// as for code logic , redundant bracket are those brackets which , don't have any operator between them

// if any redudant bracket present in the expression , return false


#include<iostream>
#include<stack>
using namespace std;

void print(stack<char> st){
    while(! st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}


bool checkRedendant(string& str){
    stack <char> st;

    for(int i=0 ; i<str.length() ; i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' ||ch == '-' ||ch == '*' || ch == '/' ){
            st.push(ch);
        }

        if(ch == ')'){
 
            bool redundant = true;
            // pop all operators and variables from top of stack until '('
            while(! st.empty()  && st.top() != '('){

                char topch = st.top();

                if(topch == '+' || topch == '-' ||  topch == '*' ||  topch == '/' ){
                    redundant = false;
                }
                st.pop();
            }

            st.pop();    // remove the remaning '('

            if(redundant == true ){
                return true;
            }

        }    
    }

    return false;
}

int main(){
    string s;
    cout<<"Enter string :";
    cin>>s;

    cout<<"Is any bracket is redundent : "<<checkRedendant(s)<<endl;
    
    return 0 ;
}



