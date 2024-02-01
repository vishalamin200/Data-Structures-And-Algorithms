// sort 0s ,1s and 2s in linked list 

#include<iostream>
#include "mylinkedlist.h"
using namespace std;


//  This method is very bad , because , data is replacing which is not good . 

void sortByCount(Node* &head){
    // step 1 : cout the number of 0s 1s and 2s

    Node* temp = head;
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    while(temp != NULL){
        if(temp->data == 0){
            countZero++;
        }
        else if (temp->data == 1){
            countOne++;
        }
        else if (temp->data == 2){
            countTwo++;
        }
        temp = temp->next;
    }


    // Insert the 0s , 1s and 2s as per their count
    temp = head;

    while(countZero != 0 ){
        temp->data = 0;
        temp = temp->next;
        countZero-- ;
    }
    while(countOne != 0 ){
        temp->data = 1;
        temp = temp->next;
        countOne-- ;
    }
    while(countTwo != 0 ){
        temp->data = 2;
        temp = temp->next;
        countTwo-- ;
    }

}


// Better Approach

void SortZeroesOnesTwos(Node* &head){
    // step 1 : create three dummy nodes 

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // step 2 : create curr and using it traverse the linked list 
    // and if curr is 0 ,1 or 2 isolate it and linked it to the dummy nodes 

    Node* curr = head;
    Node* temp = curr;
    while(curr != NULL){
        if(curr->data == 0 ){
            temp = curr;
            curr = curr->next;
            temp->next = NULL;
            
            // Now we have is isolate that node and shift curr to next element 

            // join the isolated node to oneTail and update tail
            zeroTail->next = temp;
            zeroTail = temp;
        }
        
        if(curr->data == 1 ){
            temp = curr;
            curr = curr->next;
            temp->next = NULL;
            
            // Now we have is isolate that node and shift curr to next element 

            // join the isolated node to oneTail
            oneTail->next = temp;
            oneTail = temp;
        }
        if(curr->data == 2 ){
            temp = curr;
            curr = curr->next;
            temp->next = NULL;
            
            // Now we have is isolate that node and shift curr to next element 

            // join the isolated node to oneHead
            twoTail->next = temp;
            twoTail = temp;
        }

    }

    // Now three linked list are Ready we have to connect them 

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;

        temp = oneHead;
        temp->next = NULL;
        delete(temp);
    }
    
    if(twoHead->next != NULL){
        oneTail ->next = twoHead->next;

        temp = twoHead;
        temp->next = NULL;
        delete(temp);
    }

    head = zeroHead->next;
    zeroHead->next =NULL;
    delete(zeroHead);   

}


int main(){
    Node* head = new Node(2);
    Node* tail = head;

    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, 2);

    print(head);

    // sortByCount(head);
    SortZeroesOnesTwos(head);
    cout<<endl;
    print(head);

    destroyLinkedlist(head);
    
    
    return 0 ;
}