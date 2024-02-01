
// convert BST  into Heap, Assuming that BST is complete binary tree

#include<iostream>
#include<vector>
#include "myTree.h"
using namespace std;

// Approach 1 : 

void convertBSTtoHeap(Node* root){
    // base case
    if (root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right == NULL){
        if(root->left->data > root->data){
            swap(root->data,root->left->data);
        }
        return ;
    }

    Node* rightChild = root->right;
    Node* leftChild = root->left;

    if(root->data < rightChild->data){
        swap(root->data , rightChild->data);
    }

    convertBSTtoHeap(root->left);
    convertBSTtoHeap(root->right);
}


// Approach 2 : Store inorder and assign value as postorder

void storeInorder(Node* root, vector<int>& inorder){
    if(root == NULL){
        return ;
    }

    storeInorder(root->left,inorder);
    inorder.push_back(root->data);
    storeInorder(root->right,inorder);
}

void AssingAsPost(Node* &root, int& index, vector<int>& inorder){
    if(root == NULL){
        return;
    }

    AssingAsPost(root->left,index,inorder);
    AssingAsPost(root->right,index,inorder);

    root->data = inorder[index];
    index++;

}

void BSTtoheap(Node* &root){
    vector<int> inorder;
    storeInorder(root,inorder);

    // Assign Values as post order
    int index =0 ;
    AssingAsPost(root,index,inorder);
}

int main(){
    cout<<"Enter Data for the BST "<<endl;
    Node* root = buildBST();

    // convertBSTtoHeap(root);
    BSTtoheap(root);

    improvedLevelOrderTraversal(root);
  
    return 0 ;
}

