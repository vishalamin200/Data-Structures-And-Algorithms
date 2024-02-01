// Create a Binary Search Tree from inorder Traversal

#include<iostream>
#include<vector>
#include "myTree.h"
using namespace std;

Node* buildBSTfromInorder(vector<int>& inorder , int start , int end){
    // base  case
    if(start>end){
        return NULL;
    }

    // step 1 ) mid find karo and node banao
    int mid = (start+end)/2;

    Node* root = new Node(inorder[mid]);

    // step 2) Node ka left and right Recursion banayega
    root->left = buildBSTfromInorder(inorder,start,mid-1);
    root->right = buildBSTfromInorder(inorder,mid+1,end);

    return root;
}

int main(){
    vector<int> inorder;
    int data;

    cout<<"Enter elements : ";
    cin>>data;

    while(data != -1){
        inorder.push_back(data);
        cin>>data;
    }

    int s =0 ;
    int e = inorder.size()-1;

    Node* root = buildBSTfromInorder(inorder,s,e);
    improvedLevelOrderTraversal(root);
    
    return 0 ;
}