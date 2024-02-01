// convert Binary search tree to doubly linkedlist

#include<iostream>
#include "myTree.h"
using namespace std;

void convertToDoublyLinkedlist(Node* root , Node* &head){
    if(root == NULL ){
        return;
    }

    convertToDoublyLinkedlist(root->right,head);
    root->right = head;
    if(head != NULL){
        head->left = root;
    }
    head = root;

    convertToDoublyLinkedlist(root->left,head);
}

void printLinkedlist(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
    }
    cout<<"\n\n";
}

int main(){
    Node* root = buildBST();
    Node* head = NULL;

    cout<<"Print the BST : "<<endl;
    improvedLevelOrderTraversal(root);

    cout<<"\n\nPrinting Linked list : \n";

    convertToDoublyLinkedlist(root,head);
    printLinkedlist(head);
    
    return 0 ;
}