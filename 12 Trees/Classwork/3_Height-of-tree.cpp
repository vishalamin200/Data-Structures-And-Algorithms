// We have to find the height of the tree   
// Height of the tree is defined as the largest depth from the leaf node to root node , it can be in terms of No. of nodes or in terms of the no. of edges

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

int main(){
    Node* root = buildTree(10);
    cout<<"The maximum depth(in terms of Nodes) is : "<<maxDepth(root);

    
    return 0 ;
}


// TREES :   2 4 9 -1 -1 -1 10 -1 12 -1 15 -1 -1 19 -1 -1
