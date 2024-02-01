// Add two number

#include<iostream>
#include "mylinkedlist.h"
using namespace std;

Node* Add (Node* &numOne , Node* &numTwo){

    int carry =0;
    int  sum =0 ;
    int  digit =0 ;

    Node* curr1 = reverseLinkedlist(numOne);
    Node* curr2 = reverseLinkedlist(numTwo);
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(curr1 != NULL  && curr2 != NULL){

        sum = carry +  curr1->data + curr2->data;
        digit = sum %10;
        carry = sum / 10;
        

        if(ansTail == NULL){
            Node* newNode = new Node(digit);
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            Node* newNode = new Node(digit);
            ansTail->next = newNode;
            ansTail = newNode;
        }

        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    while(curr1 != NULL){
        sum = carry +  curr1->data;
        digit = sum %10;
        carry = sum / 10;

        if(ansTail == NULL){
            Node* newNode = new Node(digit);
            ansHead = newNode;
            ansTail = newNode;
        }
        
        else{
            Node* newNode = new Node(digit);
            ansTail->next = newNode;
            ansTail = newNode;
        }

        curr1 = curr1->next;
    }

    while(curr2 != NULL){
        sum = carry +  curr2->data;
        digit = sum %10;
        carry = sum / 10;
        

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;

        curr2 = curr2->next;
    }
    
    if(carry != 0 ){
        Node* newNode = new Node(carry);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    
    ansHead = reverseLinkedlist(ansHead);
    return ansHead;
}

int main(){
    // Node* numOne = new Node(7);
    Node* numOne = NULL;
    Node* tailOne = numOne ;
    inserAtTail(numOne , tailOne , 9);
    inserAtTail(numOne , tailOne , 6);
    inserAtTail(numOne , tailOne , 8);
    inserAtTail(numOne , tailOne , 8);



    // Node* numTwo = new Node(7);
    Node* numTwo = NULL;

    Node* tailTwo = numTwo;
    inserAtTail(numTwo , tailTwo , 6);
    inserAtTail(numTwo , tailTwo , 4);
    inserAtTail(numTwo , tailTwo , 2);
    inserAtTail(numTwo , tailTwo , 8);
    inserAtTail(numTwo , tailTwo , 4);


    cout<<"num1 =  "; print(numOne);
    cout<<"num2 =  ";print(numTwo);

    Node* ans  = Add(numOne , numTwo);
    cout<<"Sum = "; print(ans);

    return 0 ;
}