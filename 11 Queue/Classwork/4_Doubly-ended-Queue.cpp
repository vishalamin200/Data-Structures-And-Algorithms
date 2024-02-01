// Doubly ended queue

#include<iostream>
using namespace std;

class Deque{
    private:
    int size;
    int front;
    int rear;
    int* arr;

    public :

    // Constructor to initialize the deque with a given capacity.
    Deque(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data){

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

    void pushFront(int data){
        
        //for first element 
        if(rear == -1){
            rear = front =0 ;
            arr[front]= data;
        }

        // for queue is full 
        else if ((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Queue is full !"<<endl;
        }
        // circular nature
        else if (front == 0 && rear != size-1){
            front = size-1;
            arr[front] = data;
        }
        // normal case
        else{
            front--;
            arr[front] = data;
        }

    }

    void popFront(){
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

    void popRear(){
        // for single element 
        if(front == rear && rear != -1){
            arr[rear] = -1;
            front= -1;
            rear = -1;
        }

        // if queue is empty
        else if(rear == -1){
            cout<<"Queue is empty Can't pop !"<<endl;
        }

        //circular nature
        else if (rear == 0){
            arr[rear] = -1;
            rear = size-1 ;
        }

        // normal case
        else{
            arr[rear] = -1;
            rear--;
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

    bool isEmpty(){
        return (rear == -1);
    }

        
    void print(){
            for(int i=0 ; i<size ;i++){
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
    }

    void printQueue(){
        if(front == -1){
            cout<<"NO element !"<<endl;
            return;
        }

        else if(front <= rear ){

            for(int i= front ; i<= rear ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        else
        {
            for (int i = front; i < size; i++){
                cout << arr[i] << " ";
            }

            for (int i = 0; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

};


int main(){
    Deque dq(5);

    dq.pushFront(12);
    dq.pushRear(34);
    dq.pushFront(44);
    dq.pushFront(39);
    
    dq.pushRear(49);
    // dq.pushRear(59);
    dq.popRear();
    dq.popFront();

    dq.printQueue();
    cout<<"Size of Queue : "<<dq.getSize()<<endl;
    cout<<"Empty or not : "<<dq.isEmpty()<<endl;

    
    return 0 ;
}