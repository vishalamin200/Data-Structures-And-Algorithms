// converth the bst into balance bst;

#include<iostream>
#include<vector>
#include "myTree.h"
using namespace std;

void storeInorder(Node* root , vector<int>& inorder){
    if(root == NULL) return;

    storeInorder(root->left,inorder);
    inorder.push_back(root->data);
    storeInorder(root->right,inorder);
}

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
    Node* root = buildBST();    // take a normal bst
    cout<<"Before balancing the BST  : "<<endl;


    vector<int> inorder;
    storeInorder(root,inorder);
    improvedLevelOrderTraversal(root);


    int s =0 ;
    int e = inorder.size()-1;

    Node* newRoot = buildBSTfromInorder(inorder,s,e);

    cout<<"\nAfter Balancing the BST :  "<<endl;
    improvedLevelOrderTraversal(newRoot);
    
     return 0 ;
}


// test case    10 20 30 40 50 60 70 80 90 -1