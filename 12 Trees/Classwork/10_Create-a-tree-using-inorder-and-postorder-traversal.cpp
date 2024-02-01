// Build a tree using inorder and post order traversal

#include <iostream>
#include <vector>
#include<unordered_map>
#include "myTree.h"
using namespace std;

Node *createTree(vector<int> &in, vector<int> &post, int &size, int inStart, int inEnd, int &postIndex, unordered_map<int, int> &mapping)
{
    // Base case
    if (postIndex < 0 || inStart > inEnd)
    {
        return NULL;
    }

    // Create root Node from taking data from post order end
    int rootData = post[postIndex--];
    Node *root = new Node(rootData);

    // Find the position of the root in inorder traversal
    int pos = mapping[rootData];

    // Build the Right Tree of Current root
    root->right = createTree(in, post, size, pos + 1, inEnd, postIndex, mapping);

    // Build the Left Tree of Current root
    root->left = createTree(in, post, size, inStart, pos - 1, postIndex, mapping);

    return root;
}

int main()
{
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    int size = inorder.size();
    int postIndex = size - 1;
    int inStart = 0;
    int inEnd = size - 1;

    unordered_map<int, int> mapping;
    for (int i = 0; i < size; i++){
        mapping[inorder[i]] = i;
    }

    Node *root = createTree(inorder, postorder, size, inStart, inEnd, postIndex, mapping);
    
    // print using preorder Traversal
    preOrder(root);

    return 0;
}