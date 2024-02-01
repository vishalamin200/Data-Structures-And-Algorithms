#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(char first , char second){
    return first > second;
}

bool comparator(int a, int b){
    return a>b;
}

bool comp(string first , string second){
    // return (first.length() < second.length());
    if(first.length() < second.length()){
        return true;
        
    }
    else{
        return false;
    }
}
int main(){
    string word = "vishal";
    sort(word.begin(), word.end(),cmp);
    cout<<word<<endl;


    vector<int> nums= { 10,4,12,5,33,20};
    sort(nums.begin(), nums.end(),comparator);
    for(int value :nums){
        cout<<value<<" ";
    }
    cout<<endl;


    vector<string> str = {"hello ", "world", "no" , "yes" , "helloworld"};
    sort(str.begin() , str.end(), comp);
    for(int i = 0 ; i < str.size() ; i++){
        cout<<str[i]<<endl;
    }


}