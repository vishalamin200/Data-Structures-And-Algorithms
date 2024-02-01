// Reverse linked list

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

Node* ReverseLinkedlist(Node* &prevNode , Node* &currNode){
    if(currNode == NULL){
        return prevNode;
    }

    Node* forwardNode = currNode->next;
    currNode->next = prevNode;
    prevNode = currNode;
    currNode = forwardNode;
    return ReverseLinkedlist(prevNode, currNode);
}

Node* reverseUsingLoop(Node* &head){
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

int main(){
    Node* head = new Node(10);
   Node* tail = head;

   inserAtTail(head,tail,20);
   inserAtTail(head,tail,30);
   inserAtTail(head,tail,40);
   inserAtTail(head,tail,50);
   inserAtTail(head,tail,60);

   cout<<"Original Linkedlist : "<<endl;
   print(head);
   cout<<endl;

//    cout<<"After Reverse by Recursion : "<<endl;
   
//    Node* prevNode = NULL;
//    Node* currNode = head;

//    Node*  Rhead = ReverseLinkedlist(prevNode,currNode );
//    print(Rhead);

//    cout<<endl;

   cout<<"AFter Reverse by Iterative method : "<<endl;

   Node* Ihead = reverseUsingLoop(head);
   print(Ihead);
   cout<<endl;

   destroyLinkedlist(Ihead);
   
    return 0 ;
}