//Convert Sorted linkedlist into BST

#include<iostream>
#include "myTree.h"
using namespace std;

void BuildLinkedlist(Node* &head, Node* &tail ,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }

    Node* newNode = new Node(data);
    tail->right = newNode;
    tail = newNode;
}

int printLinkedlist(Node* &head){
    Node* temp = head;
    int count =0 ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->right;
        count++;
    }
    cout<<"\n\n";
    return count;
}

Node* convertLinkedlistToBST(Node* &head, int n){
    if(n ==0 || head == NULL){
        return NULL;
    }

    Node* leftBST = convertLinkedlistToBST(head, n/2);
    
    Node* root = head;
    root->left = leftBST;
    head = head->right;

    root->right = convertLinkedlistToBST(head,n-1-n/2);

    return root;
}



int main(){
    Node* head = NULL;
    Node* tail = NULL;
    BuildLinkedlist(head,tail,2);
    BuildLinkedlist(head,tail,3);
    BuildLinkedlist(head,tail,4);
    BuildLinkedlist(head,tail,5);
    BuildLinkedlist(head,tail,6);
    BuildLinkedlist(head,tail,7);
    BuildLinkedlist(head,tail,8);

    int n = printLinkedlist(head);

    Node* root = convertLinkedlistToBST(head,n);
    improvedLevelOrderTraversal(root);
    
    return 0 ;
}