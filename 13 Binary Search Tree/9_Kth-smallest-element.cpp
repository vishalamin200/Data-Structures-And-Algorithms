// find the Kth Smallest Element in BST

#include<iostream>
#include "myTree.h"
using namespace std;

int kthSmallestEle(Node* &root, int& k){
    if(root == NULL) return -1;

    int leftAns = kthSmallestEle(root->left,k);
    if(leftAns != -1) return leftAns;

    k--;
    if(k==0){
        return root->data;
    }

    return kthSmallestEle(root->right,k);
}

int main(){
    Node* root = buildBST();
    cout<<"Enter K : ";
    int k; 
    cin>>k;


    cout<<"Kth smallest Element : "<<kthSmallestEle(root,k);
    
    return 0 ;
}