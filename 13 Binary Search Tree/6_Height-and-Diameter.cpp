// find the Height and Diameter of a binary Search Tree

#include<iostream>
#include "myTree.h"
using namespace std;

int height(Node* &root){
    // base case 
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight,rightHeight)+1 ;
}

int Diameter(Node* &root){
    if(root == NULL) return 0;

    int leftDia = Diameter(root->left);
    int rightDia = Diameter(root->right);

    int both = height(root->left) + height(root->right);

    return max(leftDia, max(rightDia,both));
}

int main(){
    Node* root = buildBST();
    cout<<"Height : "<<height(root);
    cout<<"\nDiameter : "<<Diameter(root);
    return 0 ;
}