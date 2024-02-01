// Remove the duplicate element for the sorted linkedlist

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

void removeDuplicates(Node* &head){
    if(head == NULL || head->next == NULL){
        return ;
    }

    Node* curr = head;

    while(curr->next != NULL ){
        Node* temp = curr->next;
        
        if(curr->data != temp->data){
             
            curr = curr->next;
        }
        else{
            curr->next = temp->next;
            temp->next = NULL;
            delete(temp);       
        }
    }
}

int main(){
    Node* head = new Node(20);
    Node* tail = head;


    inserAtTail(head,tail,30);
    inserAtTail(head,tail,30);
    // inserAtTail(head,tail,50);
    // inserAtTail(head,tail,70);
    // inserAtTail(head,tail,70);
    // inserAtTail(head,tail,70);
    // inserAtTail(head,tail,90);

    print(head);
    removeDuplicates(head);
    print(head);
    destroyLinkedlist(head);
    
    return 0 ;
}