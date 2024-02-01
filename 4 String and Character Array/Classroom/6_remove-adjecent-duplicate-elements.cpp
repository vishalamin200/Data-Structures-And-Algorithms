// leetcode : 1047    remove adjecent duplicate element from a string 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter a string : ";
    cin>>word;

    string ans = "";
    int len = word.length();
    for(int i=0 ; i<len ; i++){

        if( word[i] == ans[ans.length()- 1] ) {
            ans.pop_back();
        }
        else{
            ans.push_back(word[i]);
        }
    }

    cout<<ans;
    return 0 ;
}