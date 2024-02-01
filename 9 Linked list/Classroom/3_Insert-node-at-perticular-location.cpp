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

    while(head != NULL){
        Node* next = head->next;
        delete(head);
        head = next;
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

int main(){
    Node* head = NULL;
    Node* tail = head;

    inserAtTail(head,tail,10);
    insertAtHead(head,tail,5);
    inserAtTail(head,tail,20);
    insertAtHead(head,tail,-5);
    print(head) ;

    cout<<"Enter position and data to insert : ";
    int pos , data;
    cin>>pos>>data;
    
    insertAtPosition(head,tail,pos,data);
    print(head) ;

    destroyLinkedlist(head);

    return 0 ;
}