// character array 
#include<iostream>
using namespace std;

int main(){
    char name[100];
    char fullName[100];

    cout<<"Enter name: ";
    cin>>name;
    cout<<"your name is "<<name<<" "<<endl;
    
    cin.ignore(256, '\n');         // it will remove the charactere from the cin buffer till last enter . 

    cout<<"Enter full name  : ";
    cin.getline(fullName,100);
    cout<<"Your full name is " <<fullName<<endl;

    cout<<"write your name again  : ";
    cin.getline(fullName, 100 , 's');      // here 's' is a delemeter , means in this input will be take until 's' comes
    cout<<"Now your name is "<<fullName;

    


    return 0 ;
}