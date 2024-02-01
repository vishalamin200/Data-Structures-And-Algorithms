// Implement two stacks using single array

#include<iostream>
using namespace std;

class Stack{
    public:
    int totalSize = 6 ;
    int top1 = -1;
    int top2;

    Stack(int size = 0 ){
        totalSize = size;
        top2 = totalSize;
    }
 
    int* arr = new int[totalSize];



    // functionalities

    void push1(int data){
        if(top1+1 == top2){
            cout<<"Stack1 is full !"<<endl;
            return;
        }
        top1++;
        arr[top1] = data;  
    }

    void push2 (int data){
        if(top2-1 == top1){
            cout<<"Stack2 is full !"<<endl;
            return;
        }
        top2--;
        arr[top2] = data;
    }

    void pop1(){
        if(top1 == -1){
            cout<<"Stack1 is empty , can't remove !"<<endl;
            return;
        }
        arr[top1] =0 ;
        top1--;
    }

    void pop2(){
        if(top2 == totalSize){
            cout<<"Stack1 is empty , can't remove !"<<endl;
            return;
        }
        arr[top2] =0 ;
        top2++;
    }

    int getTop1(){
        return arr[top1];
    }

    int getTop2(){
        return arr[top2];
    }

    int getSize1(){
        return top1+1;
    }

    int getSize2(){
        return (totalSize-top2);
    }

    void print1(){
        for(int i=0 ; i<=top1 ;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void print2(){
        for(int i = totalSize-1 ; i>= top2 ;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Stack st(8);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);


    st.push2(100);
    st.push2(200);
    st.push2(300);
    st.push2(400);

 
    cout<<st.getSize1()<<endl;
    cout<<st.getSize2()<<endl;

    cout<<st.getTop1()<<endl;
    cout<<st.getTop2()<<endl;


    st.print1();
    st.print2();

   delete[]  st.arr;
     
    return 0 ;
}