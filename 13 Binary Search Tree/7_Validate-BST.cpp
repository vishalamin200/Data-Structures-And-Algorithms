// Check whether the given binary Tree is BST or not

#include<iostream>
#include "myTree.h"
using namespace std;

    bool solve(Node* &root, long long int lb , long long int ub){
        if(root == NULL) return true;

        if(root->data > lb && root->data <ub){

            bool leftAns = solve(root->left,lb,root->data);
            bool rightAns = solve(root->right,root->data, ub);

            return leftAns && rightAns;  
        }
        else return false;
    }
    bool isValidBST(Node* root) {
        long long int lowerBound = -4294967296;
        long long int upperBound = 4294967296;

        return solve(root,lowerBound,upperBound);    
    }



// Second Approach, Store inorder and Check Whether the vector is sorted or not 
void StoreInorder(Node* &root, vector<int>& inorder){
    if(root == NULL) return;

    StoreInorder(root->left,inorder);
    inorder.push_back(root->data);
    StoreInorder(root->right ,inorder);
}

bool validateBST(Node* &root){
    vector<int>inorder;
    StoreInorder(root,inorder);

    for(int i=0 ; i<inorder.size()-1 ; i++){
        // If any element is smaller than its previous one then it's not a BST
        if(inorder[i+1] <= inorder[i]) return false;
    }
    return true;
}


int main(){
    // Node* root = buildTree(100);
    Node* root = buildBST();
    cout<<"is Valid BST : "<<isValidBST(root)<<endl;
    improvedLevelOrderTraversal(root);
   
    return 0 ;
}


//   50 80 30 -1 -1  40 -1 -1 90 -1 -1

// 50 40 30 45 60 55 70 -1