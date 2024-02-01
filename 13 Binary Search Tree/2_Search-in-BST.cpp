// Search An Element in BST

#include<iostream>
#include "myTree.h"
using namespace std;

bool searchInBST(Node* &root , int target){
    if(root == NULL) return false;
    
    if(root->data == target) return true;

    else if(root->data > target)  return searchInBST(root->left , target);

    else return searchInBST(root->right,target);

}

int main(){
    Node* root = buildBST();

    if(searchInBST(root,45)) {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
    return 0 ;
}