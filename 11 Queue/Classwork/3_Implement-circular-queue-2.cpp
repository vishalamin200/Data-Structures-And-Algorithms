// second methond to implement the circular Queue

#include<iostream>
using namespace std;

class cirQueue{
    public : 
    int size;
    int rear;
    int front;
    int* arr;

    public: 

    cirQueue(int size){
        this->size = size;
        arr = new int[size];

        rear = front = -1;
    }

    void push(int data){
        //for first element 
        if(rear == -1){
            rear = front =0 ;
            arr[rear]= data;
        }

        // for queue is full 
        else if ((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Queue is full !"<<endl;
        }
        // circular nature
        else if (front!= 0  && rear == size-1){
            rear =0 ;
            arr[rear] = data;
        }
        // normal case
        else{
            rear++;
            arr[rear] = data;
        }
 
    }

    bool isEmpty(){
        return (rear == -1);
    }

    
    void pop(){
        // for single element 
        if(front == rear && rear != -1){
            arr[front] = -1;
            front= -1;
            rear = -1;
        }

        // if queue is empty
        else if(rear == -1){
            cout<<"Queue is empty Can't pop !"<<endl;
        }

        //circular nature
        else if (front == size-1){
            arr[front] = -1;
            front = 0 ;
        }

        // normal case
        else{
            arr[front] = -1;
            front++;
        }
    }

    int getFront(){
        if(rear != -1){
            return arr[front];
        }
        else{
            cout<<"Queue is empty , no front element !"<<endl;
            return -1;
        }
    }

    int getSize(){
        if(rear == -1){ 
            return 0;
        }
        else if(front <= rear){
            return rear - front +1;
        }
        else{
            return (rear+1 )+(size - front) ;
        }
    }



    print(){
        for(int i=0 ; i<size ;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }

};

int main(){

    cirQueue q(6);
    q.push(10);
    q.push(20);
    q.pop();
    q.pop();
    
    q.push(30);
    q.push(40);


    cout<<"First Element : "<< q.getFront()<<endl;
    cout<<"Size of Queue : "<< q.getSize()<<endl;
    cout<<"is Queue empty ? : "<< q.isEmpty()<<endl;

    q.print();
    
    return 0 ;
}