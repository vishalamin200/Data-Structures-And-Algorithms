// create a stack , store , remove, check empty , find size of the stack , and print the elements

#include<iostream>
#include<stack>
using namespace std;

// 
void printStack(stack<int> s){    // If we pass by reference the whole stack will delete , hense to avoid it we make pass by value
    while(! s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    printStack(s);

    s.pop();
    printStack(s);

    // finding the top value by .top()

    cout<<"top element : "<<s.top()<<endl;
    cout<<"Empty or Not ? : "<<s.empty()<<endl;

    cout<<"Size : "<<s.size()<<endl;
   
    return 0 ;
}