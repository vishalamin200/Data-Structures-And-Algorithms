// Insertion in linked list

#include<iostream>
using namespace std;

class Node{
    public:
    int  data;
    Node* next;

    Node(){
        this-> data = 0; 
        this -> next = NULL;
    }
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        delete[](Node*)this->next;
        cout<< this->data <<" node is deleted !"<<endl;
    }
};

void InsertATHead(Node* & head, Node* &tail, int data){
    // agar head null hai , pahele ek node banana padega;
    if(head == NULL){
        Node* newNode  = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }

    // agar already node bana hua hai , to niche wala code run karenge

    // first step - new Node create karo , jisme data dala hua ho

    Node* newNode = new Node(data);

    // second step - new Node ke next me head dal do

    newNode -> next = head;

    //head ki possition ko update karo

    head = newNode;
}


void printNodes(Node* &head){
    cout<<"Printing Linked list : "<<endl;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}

void insertAtTail(Node* &head , Node* &tail , int data){
    // agar pehli node NULL hai to ek node create padega
    if(tail == NULL){
        Node* newNode  = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }
    
    // agar already node hai , to niche wala code run karenge.

    // step 1 : newNode create karo aur data daal do
    Node* newNode = new Node(data);

    //step -2  : tail ke next me new Node daal do 
    tail -> next = newNode;

    //step3 :  tail ko update kardo aur head ko vaha pe hi rakho

    tail = newNode;

}

void destroyLinkedList(Node* head){


    while(head != NULL){
        Node* next = head->next;

        delete(head);
    
        head = next;
    }
}

int main(){
    // Node* head = new Node(10);
    Node* head = NULL;


    // initially head and tail ek hi jagah pe honge
    Node* tail = head;
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    InsertATHead(head,tail,100);
    // insertAtTail(head,tail,30);
    // insertAtTail(head,tail,40);
    // insertAtTail(head,tail,50);
    // insertAtTail(head,tail,60);
    // insertAtTail(head,tail,70);
    // insertAtTail(head,tail,80);
   



    printNodes(head);
    cout<<endl<<endl;
    destroyLinkedList(head);
    delete(head);
    delete(tail);


    return 0 ;
}