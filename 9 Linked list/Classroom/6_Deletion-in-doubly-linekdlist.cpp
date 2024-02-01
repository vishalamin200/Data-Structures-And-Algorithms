#include<iostream>
#include "myDoublylinkedlist.h"
using namespace std;


void deleteHead(Node* &head, Node*tail){
    if(head == NULL){
        cout<<"Linked list is emppty "<<endl;
    }

    if(head->next == NULL){
        delete(head);
        return ;
    }

    Node* temp = head;
    head= head->next;

    head->prev = NULL;
    delete(temp);
}


void deleteTail(Node* &head, Node* &tail){
    Node* temp = tail;
    tail = tail->prev;

    tail->next = NULL;
    temp->prev= NULL;
    
    delete(temp);
}

void DeletePosition(Node* &head, Node*tail , int pos ){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    if(pos == 1){
        deleteHead(head,tail);
        return;
    }

    int len = getLength(head);
    if(pos>= len){
        deleteTail(head,tail);
        return;
    }

    // step 1 : find left , curr and right;
 
    Node* Left = head;

    for(int jump = 0 ; jump <pos-2 ; jump++){
        Left = Left->next;
    }

    Node* currNode = Left->next;
    Node* Right = currNode->next;

    cout<<"Left "<<Left->data<<"  "<<"Curr : "<<currNode->data<<endl;
    

    // step 2 : 
    Left->next = Right;
    Right->prev = Left;

    delete(currNode);


}

int main(){
    Node* head = NULL;
    Node* tail = head;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);

    insertAtTail(head,tail,100);
    insertAtTail(head,tail,200);
    insertAtTail(head,tail,300);

    print(head);
    cout<<endl;
    DeletePosition(head, tail, 7);
    print(head);
    
    destroyDoblyLinkedlist(head);
    return 0 ;
}