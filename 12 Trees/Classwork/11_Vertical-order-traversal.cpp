// Vertical Order Traversal

#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include "myTree.h"
using namespace std;


void getVerticalTraversal(Node* root, int dist , map<int,vector<int>> &mapping){
    if(root == NULL){
        return;
    }

    //store the distance and corresponding Nodes  , here it's root
    mapping[0].push_back(root->data);

    // store the left part of the tree
    getVerticalTraversal(root ->left,dist-1,mapping );

    // Store the dist and nodes of right part of the node 
    getVerticalTraversal(root ->right,dist+1,mapping );
}


void printVerticalTraversal(Node* root){

    map<int,vector<int> > mapping ;
    int dist = 0 ; 

    getVerticalTraversal(root,dist,mapping);

    // printing the map - mapping

    std::map<int,vector<int> > :: iterator it ;

    for(it = mapping.begin() ; it != mapping.end() ;it++){
        vector<int> temp = it->second;

        for(auto value : temp){
            cout<<value<<" ";
        }
        cout<<endl; 
    }
}

int main(){
    Node* root = buildTree(10);

    map<int,vector<int> > mapping;

    printVerticalTraversal(root);

    
    return 0 ;
}