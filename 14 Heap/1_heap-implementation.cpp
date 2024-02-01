// Create a Heap data structure using array and vector

#include<iostream>
#include<vector>
using namespace std;
void heapify(int* ,int,int);

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int data){
        this->data = data;
        left = NULL;
        right =NULL;
    }
};

class heap{
    public:
    int size;
    int arr[100];

    heap(){
        size =0 ;
        arr[0] = -1;
    }

    insert(int data){
        size++;
        arr[size] = data;
        int childIndex = size;
        int parentIndex = childIndex/2;

        while(childIndex != 1){
            parentIndex = childIndex/2;

            if(arr[childIndex] > arr[parentIndex]){
                swap(arr[childIndex], arr[parentIndex]);
                childIndex = parentIndex;
            }
            else{
                break;
            }
        }   
    }


    void deletee(){

        if(this->size ==0 ){
            cout<<"Heap is empty !"<<endl; 
            return;
        }

        arr[1] = arr[size];
        size--;
        heapify(arr,1, size);
    }

    void print(){
        for(int i=1 ; i<= size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[], int index,int sizee){
    int largest =index;
    int child1=index*2;
    int child2 = index*2 +1;
    if(child1 <= sizee && arr[child1] > arr[largest]){
        largest = child1;
    }
    if(child2 <= sizee && arr[child2] > arr[largest]){
        largest = child2;
    }
    if(largest != index){
        swap(arr[index],arr[largest]);
        heapify(arr,largest,sizee);
    }
    else{
        return;
    }
}

Node* buildHeap(int arr[], int size){
    for(int i= size/2 ; i>0 ; i++){
        heapify(arr,i,size);
    }
}

int main(){
    heap hp;
    hp.insert(50);
    hp.insert(30);
    hp.insert(70);
    hp.insert(40);
    hp.insert(80);
    hp.insert(100);
    hp.print();
    hp.deletee();
    hp.print();

    
    
    return 0 ;
}