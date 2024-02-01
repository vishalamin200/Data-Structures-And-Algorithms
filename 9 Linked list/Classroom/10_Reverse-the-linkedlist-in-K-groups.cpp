// Reverse the linked list in K groups 

// ex :  10 20 30 40 50 60
// and k = 2 then,   20 10 40 30 60 50 

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

Node* ReverseInKgroups (Node* &head, int k ){
    if(head == NULL || head->next == NULL){
        return head;
    }

    if(len(head) < k ){
        return head;
    }

    Node* prevNode = NULL;
    Node* currNode = head;

    for(int i=0 ; i<k ; i++){
        Node* forward = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = forward;
    }

    if(currNode != NULL){  // means still have nodes to reverse    
        head->next = ReverseInKgroups(currNode, k);
    }

    return prevNode;
}

int main(){
    Node *head = new Node(10);
    Node *tail = head;

    inserAtTail(head, tail, 20);
    inserAtTail(head, tail, 30);
    inserAtTail(head, tail, 40);
    inserAtTail(head, tail, 50);
    inserAtTail(head, tail, 60);
    inserAtTail(head, tail, 70);


    cout << "Original Linkedlist : " << endl;
    print(head);


    int k ;
    cout<<"k = ";
    cin>>k ;
    
    Node* heading = ReverseInKgroups(head,k);
    print(heading);
    cout << endl;

    destroyLinkedlist(heading);
    
    return 0 ;
}