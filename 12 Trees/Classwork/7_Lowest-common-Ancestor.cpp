// 
#include<iostream>
#include "myTree.h"
using namespace std;

Node* lowestCommonAncestor(Node* &root, Node* &p, Node* &q) {
        if(root == NULL){
            return NULL;
        }

        // Ek case solve karo
        if(root->data == p->data){
            return p;
        }

        if(root->data == q->data){
            return q;
        }

        Node* leftAns = lowestCommonAncestor(root->left , p ,q);
        Node* rightAns = lowestCommonAncestor(root->right , p ,q);

        if(leftAns == NULL && rightAns == NULL){
            return NULL;
        }
        else if (leftAns == NULL && rightAns != NULL){
            return rightAns;
        }

        else if (leftAns != NULL && rightAns == NULL){
            return leftAns;
        }
        else return root;     
    }

int main(){
    Node* root = buildTree(10);
    
    Node* p = buildTree(60);

    Node* q = buildTree(80);

    Node*ans = lowestCommonAncestor(root,p,q);

    cout<<"\nLCA of tree is : "<<ans->data;
    return 0 ;
}