// Delete a Node from the BST

#include<iostream>
// #include "myTree.h"
#include "InorderPrecessor.h"
using namespace std;



void deleteNode(Node* &root, int target){
    if(root == NULL )return;

    if(root->data == target){

        if(root->right == NULL && root ->left == NULL){
            root = NULL;
            return;
        }

        int Precessor = inPrecessor(root,target);

        root->data = Precessor;

        deleteNode(root->left ,Precessor); 
    }
    else if(root->data > target){
        deleteNode(root->left,target);
    }

    else if(root->data < target){
        deleteNode(root->right,target);
    }
}


int main(){
    int target;

    Node* root = buildBST();
    cout<<"Enter Target Node : ";
    cin>>target;

    cout<<"Before deletion : "<<endl;
    inorder(root);

    cout<<"\nAFter Deletion :"<<endl;
    deleteNode(root,target);
    inorder(root);

    return 0 ;
}