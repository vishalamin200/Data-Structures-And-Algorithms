// String functions 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "vishal";
    string fullName = "Amin";

    cout<<"name : "; 
    // cin>>name;
    cout<<"your name is "<<name<<endl;

    // cout<<"Enter the full name : ";
    // cin.ignore(256,'\n');
    getline(cin, fullName) ; 
    cout<<"your full name : "<<fullName<<endl;

    //length of the string
    cout<<"Length : "<<fullName.length() <<endl;

    // popback and popback 
    cout<<"pop back : ";
    fullName.pop_back();
    cout<<fullName<<endl;

    cout<<"pushback  @ : ";
    fullName.push_back('@');
    cout<<fullName<<endl;

    // capacity and size 
    cout<<"capacity : "<<fullName.capacity()<<endl;
    cout<<"Size : "<<fullName.size()<<endl;

    //swap 
    cout<<"Swapping name and full name : "<<endl;
    swap(name, fullName);
    cout<<"Name : "<<name<<endl;
    cout<<"Full name : "<<fullName<<endl;

    // is empty ,  return 0 if empty otherwise 1; 
    cout<<"is name empty ? "<<name.empty()<<endl;

    // first and last character   .begin() and .end() return iterator
    cout<<"first and last character : ";
    string :: iterator it;
    it = name.begin();          
    cout<<*it<<" ";      // value at iterator it
    cout<<*(name.end()-1 ) <<endl;

    //.front() and .back()  return the value

    cout<<"front and back character : "<<name.front()<<" "<<name.back()<<endl;


 
    return 0 ;
}