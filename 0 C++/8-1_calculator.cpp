// write a program for the calculator

#include<iostream>
using namespace std;
int main(){
    int a, b;
    char ex;

    cout<<"Enter an expression  : ";
    cin>>a>>ex>>b;
    cout<<"= ";

    switch(ex){
        case '+' :{
            cout<<a+b;
            break;
        }
        case '-' :{
            cout<<a-b;
            break;
        }
        case '/' :{
            cout<<a/b;
            break;
        }
        case '*' :{
            cout<<a*b;
            break;
        }
        case '%' :{
            cout<<a%b;
            break;
        }

        default:{
            cout<<"Enter a Valid expression ! ";
        }

    }
    return 0;
}