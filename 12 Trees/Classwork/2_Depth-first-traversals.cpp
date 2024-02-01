// There are three depth first traversals  -> Preorder , Inorder and Postorder Traversal 

#include<iostream>
#include "myTree.h"
using namespace std;

// Preorder Traversal :  NLR  { Node , Left , Right}
/* In preorder traversal we will print the node .. and follow the NLR rule */

void preOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Print the current Node
    cout<<root-> data<<" ";

    //Recursive call for Left
    preOrder(root->left);

    //Recursive call for Right
    preOrder(root->right);
}


void inOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Left Call
    inOrder(root->left);

    // Print Node
    cout<<root-> data<<" ";

    //Right Call
    inOrder(root->right);
}


void postOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Left Call
    postOrder(root->left);

    //Right Call
    postOrder(root->right);

    // Print Node
    cout<<root-> data<<" ";
}

int main(){
    Node *root = buildTree(10);
    cout<<endl<<endl;

    preOrder(root);
    cout<<endl;

    inOrder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;

    return 0 ;
}