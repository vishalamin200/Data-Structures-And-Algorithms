// Question can be ask as , whether the given tree is sum tree or not , 
// or convert the tree into sum tree . 

/* A SumTree is a Binary Tree where the value of a node is equal to 
 the sum of the nodes present in its left subtree and right subtree.

 to convert a tree , we add current value of Node + left child + right Child */

#include<iostream>
#include "myTree.h"
using namespace std;

int convertIntoSumTree(Node* &root){
    // Base Case
    if(root == NULL){
        return 0;
    }

    int leftSum = convertIntoSumTree(root->left);
    int rightSum = convertIntoSumTree(root->right);

    root->data = root->data + leftSum + rightSum;

    return root->data;
}

int main(){
    Node* root = buildTree(10);

    cout<<"Original Tree : "<<endl<<endl;
    improvedLevelOrderTraversal(root);
    improvedLevelOrderTraversal(root);

    cout<< convertIntoSumTree(root);

    cout<<"\n\nPrinting the Tree : "<<endl<<endl;
    improvedLevelOrderTraversal(root);
    
    return 0 ;
}

// 2 4 9 -1 -1 -1 10 -1 12 -1 15 -1 -1 19 -1 -1

