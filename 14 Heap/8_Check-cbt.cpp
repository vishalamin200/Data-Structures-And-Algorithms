// Check whether the binary tree is complete binary tree or not

#include<iostream>
#include "myTree.h"
using namespace std;

void countNodes(Node* root, int& count){
    if(root == NULL){
        return;
    }
    countNodes(root->left,count);
    if(root != NULL) count++;
    countNodes(root->right,count);
}


bool isCBT(Node* root, int index , int& totalNodes){
    if(root == NULL ){
        return true;
    }

    if(index > totalNodes ){
        return false;
    }

    bool leftAns = isCBT(root->left, index*2 , totalNodes);
    bool rightAns = isCBT(root->right, index*2 +1 , totalNodes);

    return leftAns && rightAns; 
}

int main(){
    Node* root = buildTree(10);

    int count =0 ;
    int index =1 ;
    countNodes(root,count);

    cout<<"IS complete binary Tree : "<<isCBT(root,index, count);
    return 0 ;
}


// 20 80 -1 -1  -1 30 -1 -1 
// 20 -1 57 -1  -1 30 -1 50 -1 -1 
// 20 80 -1 -1  40 -1 -1 30 -1 -1 