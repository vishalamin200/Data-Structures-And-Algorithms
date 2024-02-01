// leetcode 1910   : Remove all occurences of a substring from a given string

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string s , target;
    cout<<"enter a string : ";
    cin>>s;

    cout<<"enter substring : ";
    cin>>target ;

    int pos = s.find(target);
    while(pos != string:: npos ){
        s.erase( pos , target.length());
        pos = s.find(target);
    }

    cout<<s;

    return 0 ;
}