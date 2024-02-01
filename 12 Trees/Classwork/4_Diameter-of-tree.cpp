// Find the diameter of the tree , diameter is longest path between any two nodes in a tree

// length of the path will be represented in terms of edges . 

#include<iostream>
#include "myTree.h"
using namespace std;

int maxDepth(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    int ans = max(leftDepth , rightDepth) + 1;
    return ans;
}

int diameter(Node* root){
    // Base case
    if(root == NULL){
        return 0;
    }

    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);

    
    int both =  maxDepth(root->left) + maxDepth(root->right);
    int ans = max(leftDia , max(rightDia, both));

    return ans;
}


int main(){
    Node* root = buildTree(10);
    cout<<endl;

    cout<<"diameter of the TREE : "<<diameter(root);
    
    return 0 ;
}