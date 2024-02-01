// find the maximum and minimum value in the BST

#include<iostream>
#include "myTree.h"
using namespace std;

int MinElement(Node* &root ){
    if(root == NULL) return -1;

    Node* temp = root;

    while(temp ->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int MaxElement(Node* &root ){
    if(root == NULL) return -1;
    Node* temp = root;

    while(temp ->right != NULL){
        temp = temp->right;
    }
    return temp ->data;
}

int main(){
    Node* root = buildBST();

    cout<<"Minimum : "<<MinElement(root) <<endl; 
    cout<<"Maximum : "<<MaxElement(root) <<endl; 
    return 0 ;
}