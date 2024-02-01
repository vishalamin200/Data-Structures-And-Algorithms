// return true if sum exist or return false

#include<iostream>
#include "myTree.h"
using namespace std;

// Aproach 1 : Traverse the BST and search for the corresponding pair, if exist , sum is exist .

// Aproach 2 : Store inorder , and from there find pair using two pointer approach 

void storeInorder(Node* root , vector<int>& inorder){
    if(root == NULL) return;

    storeInorder(root->left,inorder);
    inorder.push_back(root->data);
    storeInorder(root->right,inorder);
}

bool twoSum(Node* &root , int& sum){
    vector<int> inorder;
    storeInorder(root,inorder);

    int start =0 ; 
    int end = inorder.size()-1;

    while(start < end){
        int currSum = inorder[start]+inorder[end];

        if(sum == currSum )return true;

        else if(sum > currSum) start++;

        else if(sum < currSum)  end--;
    }
    return false;
}

int main(){
    int sum;
    Node* root = buildBST();
    cout<<"Enter sum : ";
    cin>>sum;

    if(twoSum(root,sum)){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Not exit"<<endl;
    }
    
    return 0 ;
}