// Check whether the tree is balanced or not 

#include<iostream>
#include "myTree.h"
using namespace std;

int maxdepth(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftDepth = maxdepth(root->left);
    int rightDepth = maxdepth(root->right);
    int ans = max(leftDepth,rightDepth)+1;

    return ans;
}

bool isBalanced(Node* root){
    // base Case
    if(root == NULL){
        return true;
    }

    int leftTreeDepth = maxdepth(root->left);
    int rightTreeDepth = maxdepth(root->right);

    int diff = abs(leftTreeDepth - rightTreeDepth);

    bool ans1 = (diff <= 1); // first Ans of the current node

    // NOw we have to check for each nodes
    // and we will the recursion to do it 

    bool ans2 = isBalanced(root->left);
    bool ans3 = isBalanced(root->right);

    if(ans1 && ans2 && ans3){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    Node* root = buildTree(10);
    cout<<endl;
    cout<<"Max Depth of the Given tree : "<<maxdepth(root)<<endl;

    cout<<"Is balanced : "<<isBalanced(root);

    return 0 ;
}