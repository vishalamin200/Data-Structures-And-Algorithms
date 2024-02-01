// we will find middle by slow and fast pointer
// slow pointer can travel , 1 step at a time while , fast pointer will take two steps at a time , if fast pointer
// reach the end , then at that time slow pointer will be at the middle element

#include <iostream>
#include "mylinkedlist.h"
using namespace std;

Node* getMiddle(Node* &head){
    
    if(fast == NULL || fast->next == NULL ){
        return slow;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            if(fast == NULL){
                break;
            }
            slow = slow->next;
        }
        else{
            break;
        }
    }

    return slow;
}


int main()
{
    Node *head = new Node(10);
    Node *tail = head;

    inserAtTail(head, tail, 20);
    inserAtTail(head, tail, 30);
    inserAtTail(head, tail, 40);
    inserAtTail(head, tail, 50);
    inserAtTail(head, tail, 60);

    cout << "Original Linkedlist : " << endl;
    print(head);
    cout << endl;

    cout<<"Middle element is "<<getMiddle(head)->data<<"  ";

    return 0;
}