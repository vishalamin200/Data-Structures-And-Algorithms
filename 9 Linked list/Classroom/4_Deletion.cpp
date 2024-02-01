// Deletion in linked list

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

void deletePosition(Node* &head, Node* &tail , int &pos){
    // Linked list is already empty
    if(head == NULL){
        return;
    }


    // fisrt element
    if(pos == 0){
        //step 1 : head ko temp ke equal karo , aur head ko agle node pe bhejo
        Node* temp = head;
        head = head->next;

        //step 2 : ab temp ko detach karo aur delete karo
        temp->next = NULL;
        delete(temp);

        return ;
    }

    if(pos >= len(head)){
        cout<<"Please Enter valid Index  ! "<<endl;
    }

    //Any middle element and last element as well 

    //step 1 : find prev and curr
    int i = 0;
    Node* prev = head;
    while(i < pos-1){
        prev = prev->next;
        i++;
    }

 
    Node* curr = prev->next;

    //step -2 : prev ke next ko curr ke next ke sath link karo 
    prev->next = curr->next;

    //step 3 : curr ke next ko null karo aur delete karo
    curr -> next = NULL;
    delete(curr);
}


int main(){
    Node* head = NULL;
    Node* tail = head;

    inserAtTail(head,tail,10);
    insertAtHead(head,tail,5);
    inserAtTail(head,tail,20);
    insertAtHead(head,tail,-5);
    print(head) ;

    cout<<"Enter position to delete : ";
    int pos;
    cin>>pos;

    deletePosition(head, tail ,pos);

    print(head);
    destroyLinkedlist(head);

    return 0 ;
}