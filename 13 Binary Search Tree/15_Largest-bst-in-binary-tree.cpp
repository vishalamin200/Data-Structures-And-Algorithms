// return the size of largest bst in binary tree
#include<iostream>
#include "myTree.h"
using namespace std;

class info{
    public:
    bool isbst;
    int min;
    int max;
    int count;

    info(){}

    info(bool bst, int min, int max, int count){
        this->isbst = bst;
        this->min = min;
        this->max = max;
        this->count = count;
    }
};

info* largestBSTinBinaryTree(Node* root){
    if(root->right == NULL && root->left == NULL){
        info* p = new info(true,root->data, root->data, 1);
        return p;
    }

    info* left = largestBSTinBinaryTree(root->left);
    info* right = largestBSTinBinaryTree(root->right);

    info* rootInfo = new info();
    if( (right->isbst && left->isbst) && (root->data> left->max) && (root->data < right->min) ){
        rootInfo->isbst = true;
        rootInfo->count = right->count + left->count +1;
    }
    else{
        rootInfo->isbst = false;
        rootInfo->count = max(left->count,right->count);
    }

    rootInfo->min = min(root->data, min(right->min, left->min));
    rootInfo->max = max(root->data, max(right->max,left->max));
    
    return rootInfo;
}

int main(){
    Node* root = buildTree(120);

    info* ans = largestBSTinBinaryTree(root);
    cout<<"Ans = "<<ans->count<<endl;
    // improvedLevelOrderTraversal(root);

    return 0 ;
}


// 70 60 -1 -1 75 -1 -1 100 90 -1 -1 120 110 -1 -1 130 -1 -1   