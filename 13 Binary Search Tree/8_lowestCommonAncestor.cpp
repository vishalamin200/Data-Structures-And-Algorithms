// find the lowest common Ancestor in Binary Search tree

#include<iostream>
#include "myTree.h"
using namespace std;



Node *lowestCommonAncestor(Node *&root, int &p, int &q){
    if (root == NULL)return NULL;

    if (p< root->data && q< root->data){
        return lowestCommonAncestor(root->left, p, q);
    }
    if (p > root->data && q > root->data){
        return lowestCommonAncestor(root->right, q, p);
    }
    return root;
}

int main(){
    Node* root = buildBST();
    cout<<"Enter Two values in BSt : ";
    int p,q;
    cin>>p>>q;

    cout<<"Lowest common Ancesstor : "<<lowestCommonAncestor(root,p,q)->data <<endl<<endl;
    improvedLevelOrderTraversal(root);
    
    return 0 ;
}


// 50 30 35 31 39 20 18 80 75 90 -1