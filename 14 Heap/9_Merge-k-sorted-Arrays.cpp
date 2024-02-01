// Merge K sorted array

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    int index;
    int arrNu;

    Node(int d, int i, int n){
        data = d;
        index = i;
        arrNu = n;
    }  
};

class compair{
    public:
    bool operator()(Node* first, Node* second){
        return first->data > second->data;
    }
};

vector<int> mergeKsortedArrays(int arr[][5] , int size , int k){
    // craate min heap

    priority_queue<Node*, vector<Node*> , compair > minHeap;
    vector<int> ans;

    // Insert first element of the k arrays
    for(int i=0 ; i<k ;i++){
        Node* newNode = new Node(arr[i][0],0,i);
        minHeap.push(newNode);
    }

    while (!minHeap.empty()){
        // take top Node
        Node *top = minHeap.top();
        minHeap.pop();

        // store top node data in the answer
        ans.push_back(top->data);

        // Insert new Node of the same array ,before inserting make sure that it lies in the range
        if (top->index + 1 < size){
            Node *newNode = new Node(arr[top->arrNu][top->index + 1], top->index + 1, top->arrNu);
            minHeap.push(newNode);
        }
    }

    return ans;
}

int main(){

    int arr[3][5] ={{1,3,5,7,9},
                    {2,4,6,8,10},
                    {0,9,10,11,15}};
    
    cout<<"After merging arrays: "<<endl;
    vector<int> ans = mergeKsortedArrays(arr,5,3);

    for(auto value : ans){
        cout<<value<<" ";
    }   
    return 0 ;
}


// time complexity  : O(nk log(k))