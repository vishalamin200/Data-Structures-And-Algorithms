// It is an Alternative for the if else statement 
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    (num>0)? cout<<"Positive" : cout<<"Not positive"<<endl;
    (num&1)? cout<<"Even": cout<<"Odd";
    return 0;
}