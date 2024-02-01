// find an element in the 2D matrix using binary search

// condtion of matrix is element must be in sorted order

#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int> > &mat , int rows ,int cols){
    for(int i=0  ; i <rows ; i++){
        vector<int> temp;
        for(int j=0 ; j<cols ; j++){
            int x ;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }
}

void print(vector<vector<int> >&mat ){
    int rows = mat.size();
    int cols = mat[0].size();

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<rows ; j++){
            cout<<mat[i][j]<<" ";
        }
    }
}

bool searchKey(vector<vector<int> > &mat, int rows ,int cols , int key){
    int start =0 , end = rows*cols -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        int rowIndex = mid/cols , colIndex = mid%cols;
        int element = mat[rowIndex][colIndex];
        if( element == key){
            return true;
        }
        else if (key > element){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}

int main(){
    int cols ,rows , key;
    // vector<vector<int> > mat ;
    // cout<<"Enter dimension of matrix : ";
    // cin>>rows>>cols;
    // cout<<"Enter element : ";
    // input(mat, rows, cols);
    // print(mat);

    // cout<<"Enter key : ";
    // cin>>key;
    // searchKey(mat, rows, cols ,key) ? cout<<key<<" is present\n" : cout<<key<<" is not present\n";
   
    cout<<"key = ";
    cin>>key;

    vector<vector<int> > mat2 = { {8,9,10,11},{15,16,17,18} , {25,26,27,28},{35,36,37,38}}; 
    searchKey(mat2,4,4,key)? cout<<key<<" is present" : cout<<key<<" is not present";

    return 0 ;
}