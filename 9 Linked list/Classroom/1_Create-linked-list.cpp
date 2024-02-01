//code for creating a simple linked list

#include<iostream>
using namespace std;

class student{
    public: 
    int roll ;
    string brach;
};

class Node{
    public:

    int data;
    Node* next;

    Node(){
        this->data = 0;
        this -> next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        delete[] (Node*)this->next; //deleting dynamically allocated memory of node's '
        cout<<this->data<<" Node is destructed"<<endl;
    }
};

void printNodes(Node* head){
    cout<<"Printing the linked list "<<endl;

    Node* temp = head;
    while(temp != NULL ){
           cout<< temp->data <<"  ";
           temp = temp->next;
    }
}

int main(){

    Node* first = new Node(20);
    Node* second = new Node(10);
    Node* third = new Node(30);

    first-> next = second;
    second->next = third;

    printNodes(first);
    cout<<endl<<endl;

    delete(first);
    delete(second);
    delete(third);

    return 0 ;
}