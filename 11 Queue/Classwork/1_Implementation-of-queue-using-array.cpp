// Implementation of Queue using an Array
#include<iostream>
using namespace std;


class queue{
    public : 
    int size ;
    int front, rear;
    int* arr ;

    queue(int size){
        this->size = size;
        arr = new int[size];
        front =0 ; 
        rear = 0;
    }

    void push(int data){
        //if queue is not full then only push an element 
        if(rear == size){
            cout<<"Queue is full ! "<<endl;
            return ;
        }

        arr[rear] = data;
        rear++;       
    }

    bool isEmpty(){
        if(rear == front){
            return true;
        }
        else{
            return false;
        }
    }

    void pop(){
        /* If the queue is empty */
        if(isEmpty()){
            cout<<"The Queue is empty !"<<endl;
            return ;
        }
        arr[front] = -1;
        front++;

        if(rear == front){
             // Now queue is empty , but array may be filled so 
             rear = front = 0;
        }
    }

    int getSize(){
        return rear - front;
    }

    int Front(){
        if(isEmpty()){
            cout << "Queue Empty" << endl;
        }
        else{
            return arr[front];
        }
    }

    void print(){
        for(int i=0 ; i<size ; i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl<<endl;
    }
};


int main(){
    queue que(10);

    que.push(3);
    que.push(6);
    que.push(9);
    que.push(12);
    que.push(15);
    que.push(25);
    que.push(35);
    que.push(45);
    que.push(55);
    que.push(65);
    
    que.print();

    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.pop();
    que.pop();

    que.push(21);

    que.print();
    
    cout<<endl;
    cout<< que.Front()<<endl;

    cout<<"Is empty : "<<que.isEmpty()<<endl;
    
    return 0 ;
}