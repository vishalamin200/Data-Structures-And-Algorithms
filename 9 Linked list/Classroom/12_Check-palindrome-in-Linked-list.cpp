// Check whther the LL is palindrome or not

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

Node* getMiddle(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast->next ;
            slow = slow->next;
        }
        else{
            return slow;
        }
    }
    return slow;
}

Node*  reverseLinkedlist(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    return prev;
}

bool checkPalindrome(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }


    // first step : find middle 
    Node* middle = getMiddle(head);

    // half part ko reverse karke jodo

    if(middle->next != NULL){
        middle->next = reverseLinkedlist(middle->next);
    }
  
    //Initial me temp1 lagao , aur mid ke next me temp 2 lagao aur compair karo
    // Agar temp2 NULL ho jata hai aur false return nai hota to true return karo.
    Node* temp1 = head;
    Node* temp2 = middle->next;

    while(temp2 != NULL){

        if(temp1->data  !=  temp2->data){
            return false;
        }
        else{
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    inserAtTail(head,tail,29);
    inserAtTail(head,tail,40);
    inserAtTail(head,tail,29);
    inserAtTail(head,tail,10);
    inserAtTail(head,tail,10);
    

    print(head);
    checkPalindrome(head) == 1 ? cout<<"Palindrome ": cout<<"NOT Palindrome " ;
   
    cout<<endl<<endl;
    destroyLinkedlist(head);
    
    return 0 ;
}