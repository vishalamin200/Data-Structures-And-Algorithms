// Path Sum II
#include<iostream>
#include<vector>
#include "myTree.h"
using namespace std;

void solution(Node* root , vector<vector<int>> &ans, vector<int>&path , int& targetSum , int& sum ){
    if(root == NULL){
        return ;
    }
    if(root->left ==NULL && root->right ==NULL){
        sum += root->data;
        path.push_back(root->data);

        if(sum == targetSum){
            ans.push_back(path);
        }
    
        // Backtrack
        sum -= root->data;
        path.pop_back();
        return ;
    }

    sum += root->data;
    path.push_back(root->data);

    //Left part of tree
    solution(root->left , ans, path ,targetSum , sum);

    //right Part of Tree
    solution(root->right , ans, path ,targetSum , sum);

    sum -= root->data;
    path.pop_back();
}

int main(){
    int sum = 0 , targetSum;
    vector<vector<int>> ans;
    vector<int> path;


    Node* root = buildTree(10) ;
    cout<<"Enter target Sum : ";
    cin>>targetSum;

   solution(root, ans, path, targetSum, sum);

    for(auto i : ans){
        for(auto j: i){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
 
    return 0 ;
}

// 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1 