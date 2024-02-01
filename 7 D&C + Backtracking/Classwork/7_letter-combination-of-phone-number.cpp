// letter combination of phone keypad

#include<iostream>
#include<vector>
using namespace std;

void printCombinations(string& digits, string mapping[],string output, vector<string>& ans,int index){
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return ;
    }

    int digi = digits[index] - '0';
    string str = mapping[digi];

    for(int i=0 ; i< str.length() ; i++){
        char ch = str[i];
        output.push_back(ch);
        printCombinations(digits,mapping,output,ans,index+1) ;   
        output.pop_back()  ;    
    }
}

int main(){

    string digits;
    cout<<"Enter string of digits : ";
    cin>>digits;
    vector<string> ans ;
    string output = "";
    int index=0;

    string mapping[10];
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    printCombinations(digits, mapping,output,ans,index);

    for(string str : ans){
        cout<<str<<endl;
    }
 
    return 0 ;
}
