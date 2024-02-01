// Inorder precessor and successor

#include<iostream>
#include<vector>
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


Node* SearchInBST(Node*& root , int target){
    if(root == NULL) return NULL;

    if(root->data == target){
        return root;
    }
    else if( root->data > target){
        return SearchInBST(root->left,target);
    }
    else{
        return SearchInBST(root->right,target);
    }
}

int inorderPrecessor(Node* &root ,int target){
    Node* curr = SearchInBST(root,target);

    if(curr->left){
        return MaxElement(curr->left);
    }
}

int inorderSuccessor(Node* &root ,int target){
    Node* curr = SearchInBST(root,target);

    if(curr->right){
        return MinElement(curr->right);
    }
}


// Second Aproach -> Store the Inorder from 

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

int main(){
    Node* root = buildBST();
    cout << "Predecessor:"<<inPrecessor(root,30)<<endl;
    cout << "Successor : "<<inSuccessor(root,30)<<endl;

    return 0 ;
}