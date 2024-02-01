#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(int data)
{
    if (data == -1)
    {
        return NULL;
    }

    // create a root node
    Node *root = new Node(data);

    int leftData, rightData;

    cout << root->data << " ka Left : ";
    cin >> leftData;

    // Root ka left Node
    root->left = buildTree(leftData);

    cout << root->data << " ka Right : ";
    cin >> rightData;

    // Root ka Right Node
    root->right = buildTree(rightData);

    return root;
}

// Traversal in a Tree  ( Level Order Traversal)

void leverOrderTravesal(Node *root)
{
    queue<Node *> q;

    //  push the root in queue
    if(root == NULL){
        return;
    }
    q.push(root);

    while (!q.empty())
    {
        //  Store in temp and Remove the front element of Queue
        Node* temp  = q.front();
        // Print the temp (front element)
        cout << temp->data << " ";
        q.pop();
    
        // push their childs
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

// TRaverse the tree as per the levels 
void improvedLevelOrderTraversal(Node *root)
{
    queue<Node *> q;

    //  push the data in queue and also push NULL to mark the new line
    if(root == NULL){
        return;
    }
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        // As we have push the NULL , so , when we get NULL we will print new line and push NULL, but in case q is empty , we will not print endl or push NULL
        if (temp == NULL && !q.empty()){
            cout<<endl;
            q.push(NULL);
        }

        else{   
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void preOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Print the current Node
    cout<<root-> data<<" ";

    //Recursive call for Left
    preOrder(root->left);

    //Recursive call for Right
    preOrder(root->right);
}


void inOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Left Call
    inOrder(root->left);

    // Print Node
    cout<<root-> data<<" ";

    //Right Call
    inOrder(root->right);
}


void postOrder(Node* root){
    // if root null then return
    if(root == NULL){
        return;
    }

    //Left Call
    postOrder(root->left);

    //Right Call
    postOrder(root->right);

    // Print Node
    cout<<root-> data<<" ";
}