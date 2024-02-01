// Check whether the given complete binary tree is bst or not

#include<iostream>
#include<vector>
#include "myTree.h"
using namespace std;

bool isHeap(vector<int>& vect, int index , int& size){
    // base case , leaf nodes will be always a heap
    if(index >= size/2){
        return true;
    }

    int child1 = index*2 +1;
    int child2 = index*2 +2;

    // ek case solve karo
    if(vect[index] >= vect[child1] && vect[index]>= vect[child2]){
        bool leftAns = isHeap(vect,child1,size);
        bool rightAns = isHeap(vect,child2,size);

        return leftAns && rightAns;
    }
    else {
        return false;
    }
}

// If we have given in a Tree form then 

bool isValidHeap(Node* root){
    // base case if leaf Node 
    if(root->left == NULL && root->right == NULL){
        return true;
    }

    // left having only left child 
    if(root->right == NULL){
        return true;
    }

    Node* leftChild = root->left;
    Node* rightChild = root->right;

    if(root->data >= leftChild->data && root->data >= rightChild->data ){
        bool leftAns = isValidHeap(leftChild);
        bool rightAns = isValidHeap(rightChild);

        return leftAns && rightAns;
    }
    else{
        return false;
    }
}

int main(){
    vector<int> ct = {12,10,9,2,5,7,6};
    int size = ct.size();

    // bool ans = isHeap(ct,0,size);
    // cout<<"Is Heap : "<<ans<<endl;


    // If tree is not 
    cout<<"Enter Nodes (complete binary tree) : "<<endl;
    Node* root = buildTree(12);


    cout<<"\nIs Heap : "<<isValidHeap(root);

    // improvedLevelOrderTraversal(root);
    
    return 0 ;
}

//  10 2 -1 -1 5 -1 -1 9 7 -1 -1 6 -1 -1    - true
//  10 2 -1 -1 5 -1 -1 9 7 -1 -1 16 -1 -1    - false