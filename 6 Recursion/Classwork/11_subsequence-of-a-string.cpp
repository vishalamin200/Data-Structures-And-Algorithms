//print the all the subsequence of the string 


#include<iostream>
#include<vector>
using namespace std;

void Subsequences(string& str, int& size ,int index , string ans, vector<string>&v){
    //base condition
    if(index == size){
        // cout<<ans<<"  ";
        v.push_back(ans);

        return;
    }

    // exclude index element
    Subsequences(str, size, index+1 , ans,v);

    //include index element
    ans.push_back(str[index]);
    Subsequences(str, size, index+1,ans, v );
}

int main(){
    string str = "abcd";
    int size = str.length();
    int index =0 ;
    
    string ans = "";
    vector<string> v ;
    Subsequences(str, size, index ,ans , v);

    for(string str : v){
        cout<<str<<" ";
    }
    return 0 ;
}