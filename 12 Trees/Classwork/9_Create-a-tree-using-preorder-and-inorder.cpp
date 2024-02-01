// Create and a tree using Preorder and Inorder Traversals

#include<iostream>
#include<vector>
#include<unordered_map>
#include "myTree.h"
using namespace std;

int findPos(vector<int>& in , int size , int ele){
    for(int i =0 ; i<size ; i++){
        if(in[i] == ele){
            return i;
        }
    }
    return -1;
}



Node* createTree(vector<int>&pre , vector<int>&in , int& size , int inStart, int inEnd , int& preIndex, unordered_map<int,int>& mapping){
    if(preIndex >= size || inStart > inEnd){
        return NULL;
    }

    //Create a Root for pre
    int rootData = pre[preIndex++];
    Node* root = new Node(rootData);
    // cout<<root->data<<endl;

    // int pos = findPos(in,size,rootData);
    int pos = mapping[rootData];

    //Left Tree formation
    root->left = createTree(pre,in ,size, inStart , pos-1 , preIndex,mapping);

    // Right Tree Formation
    root->right = createTree(pre,in ,size,pos+1 , inEnd, preIndex, mapping);

    return root;
}

int main(){
    // vector<int> preorder = {10,20,30,40,50,60};
    vector<int> preorder = {3,9,20,15,7};
    // vector<int> inorder = {30,20,10,50,40,60};
    vector<int> inorder = {9,3,15,20,7};
    int size = inorder.size();
    int inStart = 0;
    int inEnd = size-1;
    int preIndex =0 ;

    unordered_map<int,int> mapping;
    for(int i=0 ; i<size ; i++){
        mapping[inorder[i]] = i;
    }



    Node* root = createTree(inorder,preorder, size, inStart,inEnd , preIndex ,mapping);

    // postOrder(root);
    // leverOrderTravesal(root);
    preOrder(root);
    
    return 0 ;
}


