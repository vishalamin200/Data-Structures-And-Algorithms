// Single Circular linked list : 


#include<iostream>
#include "mylinkedlist.h"
using namespace std;

int main(){
   
   Node* head = new Node(10);
   Node* tail = head;

   inserAtTail(head,tail,20);
   inserAtTail(head,tail,30);
   inserAtTail(head,tail,40);
   inserAtTail(head,tail,50);
   inserAtTail(head,tail,60);

   print(head);

   // for circular linked list // head and tail will be join

   tail->next = head;  

   // similar in case of Doubly circlular linked list 
   
    return 0 ;
}