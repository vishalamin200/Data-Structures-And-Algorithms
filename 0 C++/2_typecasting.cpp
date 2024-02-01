//type casting
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //implicit type casting 

    int num = 20;
    char ch = 'a';  // ASCII value of ch = 97;
    cout<<num+ch<<endl;

    //explicit type casting 

    cout<<char(num+ch)<<endl;
    double pi = 3.141592;
    cout<<(int)pi + num<<endl;

    cout<<"ASCII value of a : "<<int(ch)<<endl;

    string minute = "12";
    int min = stoi(minute);
    cout<<min<<endl;

    string name = "babbar";
    sort(name.rbegin() , name.rend());
    cout<<name;
    
    return 0;
}

