#include<iostream>
using namespace std;

void generateParanthesis(int n , int open , int close, string output){
    // base case
    if(open ==0 && close==0){
        cout<<output<<endl;
        return ;
    }

    if(open >=0 ){
        output.push_back('{');
        generateParanthesis(n, open-1 , close , output );

        //backtracking
        output.pop_back();
    }
    if(open < close ){
        output.push_back('}');
        generateParanthesis(n,open, close-1,output);

        //backtrack
        output.pop_back();
    }
}

int main(){
    int n;
    cout<<"Enter value of n = ";
    cin>>n;

    int open = n;
    int close = n;
    string output="";

    generateParanthesis(n , open, close ,output);
    return 0 ;
}