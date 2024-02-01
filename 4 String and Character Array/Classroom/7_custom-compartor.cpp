// print the string in reverse order using custom comparator
// costom comparator used to sort given data in a way we want

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// custom comparator function

bool cmp(char first , char second ){
    return first > second;
}


bool comparator(string first , string second){
    return first.length() < second.length();
}

int main(){
    string name = "vishal";

    cout<<"Before sort : ";
    cout<<name<<endl;
    sort(name.begin() , name.end() , cmp);
    cout<<name<<endl;

    sort(name.begin() , name.end() , cmp);

    cout<<"Sort again using rbegin() and rend() : ";
    sort(name.rbegin() , name.rend());
    cout<<name<<endl;

    vector<string> names  = {"vishal" , "amin" , "HELlo world" , " this is my name" , "my"};

    cout<<"\n\nstrings are as follow : \n";
    for(auto value : names){
        cout<<value<<"  ,  ";
    }

    sort(names.begin() , names.end() , comparator);
    
    cout<<"\n\nsort according to the number of element in a string : \n";
    for(auto value : names){
        cout<<value<<"  ,  ";
    }

    return 0 ;
}