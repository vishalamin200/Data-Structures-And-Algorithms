#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // creating a constructor
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node*& root ,int& dta){
    if(root == NULL){ 
        root = new Node(dta); 
        return root;
    }


    if(root->data > dta){
        root->left = insertIntoBST(root->left,dta);
    }
    else{
        root->right = insertIntoBST(root->right,dta);
    }
    
    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

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

void levelOrderTraversal(Node*& root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right)  q.push(temp->right);
    }
}


bool searchInBST(Node* root , int target){
    if(root == NULL){
        return false;
    }
    else if(root->data == target){
        return true;
    }
 
    if(target < root->data){
        return searchInBST(root->left,target);
    }
    else{
        return searchInBST(root->right,target);
    }
}

int main(){
    
    Node* root = NULL;
    cout<<"Enter the numbers : ";
    int data;

    cin>>data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
    
    cout<<"Printing the binary Search Tree : "<<endl;
    // inorder(root);
    improvedLevelOrderTraversal(root);
    // levelOrderTraversal(root);
    cout<<searchInBST(root,30);    
    return 0 ;
}
