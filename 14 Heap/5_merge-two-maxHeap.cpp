// Merge two max heap 
#include<iostream>
#include<vector>
using namespace std;

// Aproach 1 : merge two array and then  build Heap 

    void heapify(vector<int>& input,int index, int& size){
        int largest = index;
        
        int child1 = index *2+1;
        int child2 = index*2+2;
        
        if(child1 <size && input[child1]>input[largest] ){
            largest = child1;
        }
        
        if(child2 <size && input[child2]> input[largest] ){
            largest = child2;
        }
        
        if(largest != index){
            swap(input[largest],input[index]);
            heapify(input,largest,size);
        }
        
        return ;
    }
    
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        
        vector<int> ans = a;
        for(int i =0 ; i<m ;i++){
            ans.push_back(b[i]);
        }
        

        int size = m+n;
        
        
        // build heap
        for(int i= size/2 -1 ; i>=0 ; i--){
            heapify(ans,i,size);
        }
        
        return ans;
    }




// Aproach 2 : As both are already a heap , Take one array and insert into the other heap.



void insertInheap(vector<int>&input , int data){
    int size = input.size();
    input.push_back(data);

    int child = size;

    while(child !=0 ){
        int parent = (child-1)/2;

        if(input[parent] < input[child]){
            swap(input[parent],input[child]);
            child = parent;
        } 
        else{
            break;
        }
    }

}


vector<int> mergeTwoHeaps(vector<int>&a , vector<int>&b , int n , int m){

    for(int i=0 ;i<m ;i++){
        insertInheap(a,b[i]);
    }   
    return a;
}


int main(){
    // vector<int> maxHeap1 = {10,8,7,4,2,5,6};
    vector<int> maxHeap1 = {10,5,6,2};
    // vector<int> maxHeap2 = {20,15,8,9,6,1,3};
    vector<int> maxHeap2 = {12,7,9};

    int size1 = 4;
    int size2 = 3;

    vector<int> ans = mergeHeaps(maxHeap1,maxHeap2,size1,size2);

    for(int i=0 ; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

   
    // Second Approach , as first array is already a heap, insert second array in it.
    cout<<"\n\n\n";
    vector<int> ans2 = mergeTwoHeaps(maxHeap1,maxHeap2,size1,size2);

    for(auto i : ans2){
        cout<<i<<" ";
    }
    return 0 ;
}
