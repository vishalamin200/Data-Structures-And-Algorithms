#include<iostream>
#include "myTree.h"
using namespace std;

void StoreInorder(Node* &root, vector<int>& inorder){
    if(root == NULL) return;

    StoreInorder(root->left,inorder);
    inorder.push_back(root->data);
    StoreInorder(root->right ,inorder);
}

int inPrecessor(Node* &root , int target){
    vector<int>inorder;
    StoreInorder(root,inorder);

    // search the index of the target
    for(int i=0 ; i<inorder.size() ; i++){
        if(target == inorder[i]){
            if(i ==0 ) return inorder[0];
            else return inorder[i-1];
        }
    }
}
int inSuccessor(Node* &root , int target){
    vector<int>inorder;
    StoreInorder(root,inorder);

    // search the index of the target
    for(int i=0 ; i<inorder.size() ; i++){
        if(target == inorder[i]){
            return inorder[i+1];
        }
    }
}
