// Insert Node at perticular position
#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next = NULL ;

    Node(){
        this->data = 0 ;
    }

    Node(int data){
        this->data = data;
    }

    ~Node(){
        cout<<this->data<<" node is deleted ! "<<endl;
    }
};

void insertAtHead(Node* &head , Node* &tail , int data){
    if(head == NULL){
        // If list empty, create new node and set as both the head and tail nodes.

        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }

    Node* newNode = new Node(data);
    newNode ->next = head;
    head = newNode;
}

void inserAtTail(Node* &head , Node* &tail , int data){
    if(tail == NULL){
        // If list empty, create new node and set as both the head and tail nodes.

        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl<<endl;
}

void destroyLinkedlist(Node* head){
    Node* temp = head;

    while(head != NULL && temp->next != head){
        Node* next = head->next;
        delete(head);
        head = next;
        temp = temp->next;
    }
}


int len(Node* &head){
    Node* temp = head;
    int leg = 0 ;
    while(temp != NULL){
        temp = temp->next;
        leg++;
    }
    return leg;
}

void insertAtPosition(Node* &head , Node* &tail , int pos , int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }


    if(pos == 0){
        insertAtHead(head, tail, data);
        return;
    }

    if(pos >= len(head)){
        inserAtTail(head,tail,data);
        return ;
    }

    // step 1 : prev and curr pointer nikalo
    int i =1;
    Node* prev = head;
    while(i<pos){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;


    // step2 : create new node to insert 
    Node* newNode = new Node(data);

    // step 3:   new node ke next ko curr se link karo
    newNode-> next = curr;

    // step 4 : previous ke next ko new Node se link karo
    prev->next = newNode;
}


Node* reverseLinkedlist(Node* &head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    Node* prevNode = NULL;
    Node* currNode = head;

    while(currNode != NULL){
        // cout<<prevNode->next->data<<" ";
        // cout<<currNode->data<<" ";

         Node* forward = currNode->next;
         currNode -> next = prevNode;
         prevNode = currNode;
         currNode = forward;
    }
    return  prevNode;
}

