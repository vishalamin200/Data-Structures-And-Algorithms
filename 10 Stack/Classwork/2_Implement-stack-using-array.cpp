// Implement a stack using an  Array : 

#include<iostream>
using namespace std;


class Stack {
    public : 
    int totalSize ;
    int top = -1;

    // constructor
    Stack(int size = 0){
        this->totalSize = size;
    }
    int* arr = new int[totalSize];


    // functionalities

    void push(int data){
        if(top == totalSize -1){
            cout<<"Stack Overflow !"<<endl;
            return ;
        }

        top++;
        arr[top] = data;
    }

    void  pop(){
        if(top == -1){
            cout<<"Stack is empty , you can't remove ! "<<endl;
            return ;
        }
        arr[top] = 0 ;
        top--;
    }

    bool empty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }


    int getSize(){
        return top+1;
    }

    int getTop(){
        if(top == -1 ){
            cout<<"Stack is empty !"<<endl;
        }
        else{
            return arr[top]; 
        }
    }

    ~Stack(){
        delete[]arr;
    }
};



int main(){
    Stack st(5);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(10);

    

    cout<<st.getTop()<<endl;
    st.pop();

    cout<<st.getTop()<<endl;
    cout<<st.getSize()<<endl;
    cout<<st.empty()<<endl;

    while(! st.empty()){
        cout<<st.getTop()<<" ";
        st.pop();
    }
    



    // printStack(st);
    delete[] st.arr;
    
    return 0 ;
}

