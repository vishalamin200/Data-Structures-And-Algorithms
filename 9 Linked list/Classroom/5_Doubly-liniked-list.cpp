// Doubly linked list

#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    // constructor
    Node(){
        this->data = 0;
    }
    Node(int data){
        this->data = data;
    }

    // destructor 

    ~Node(){
        cout<<this->data<<" node is deleted !"<<endl;
    }
};


void print(Node* &head ){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* head){
    int len = 0 ;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;   
    }

    return len;
}

void destroyDoblyLinkedlist(Node* &head){
    Node * temp = head;

    while(temp != NULL){
        delete(temp);
        temp = temp->next;
    }
    
}

void insertAtHead(Node* &head, Node* &tail , int data){
    // if head is NULL

    if(head == NULL){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        tail = newNode;
        return ;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;   
}


void insertAtTail(Node* &head , Node* &tail , int data){
    // if tail is NULL
    if(tail == NULL){
        Node* newNode = new Node(data);

        head = tail = newNode;
        return ;
    }

    // if tail is not NULL
    Node* newNode = new Node(data);
    tail -> next = newNode;
    newNode-> prev = tail;
    tail = newNode;
}

void traverseUsingTail(Node* &tail){
    Node* temp = tail;
    while(tail != NULL){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }
}


void insertAtPosition ( Node* &head , Node* &tail ,int pos , int data){ 
    // pos == 1 
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = getLength(head);
    if(pos>len){
        insertAtTail(head,tail,data);
        return;
    }

    // in Middle and at tail
    
    // step 1 : prevNode and curr Node ko find karo
    int jump = 0 ;
    Node* prevNode = head;

    while(jump <= pos-2 ){
        prevNode = prevNode->next;
        jump++;
    }
  
    Node* currNode =  prevNode->next;


    // step 2  : newNode ko create karo jisne data dala hua ho

    Node* newNode = new Node(data);

    // step 3 : 

    newNode->next = currNode;
    currNode->prev = newNode;

    // step 4;
    prevNode->next = newNode;
    newNode->prev = prevNode;

}



int main(){

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* forth = new Node(40);
    // Node* fifth = new Node(50);


    // Node* head = first;
    // Node* tail = fifth;

    // first->next = second;
    // second->prev = first;

    // second->next = third;
    // third->prev = second;

    // third->next = forth;
    // forth->prev = third;

    // forth->next = fifth;
    // fifth->prev = forth;

    Node* head = NULL;
    Node* tail = head;
    insertAtHead(head, tail,20);
    insertAtHead(head, tail,30);
    insertAtTail(head, tail,100);
    insertAtTail(head, tail,200);
    insertAtTail(head, tail,300);
    insertAtTail(head, tail,400);


    print(head);
    cout<<endl;
    // traverseUsingTail(tail);

    insertAtPosition(head,tail,3,50);
    print(head);
    cout<<endl;

    destroyDoblyLinkedlist(head);
    
    return 0 ;
}