// vector of vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int colSize, rowSize;
    cout<<"Enter dimension of a matrix : ";
    cin>>rowSize>>colSize;
    vector<vector<int> > mat;

    cout<<"Enter elements : "<<endl;
    for(int i=0 ; i<rowSize ; i++){
        vector<int> temp; 
        for(int j=0  ; j<colSize; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }

    cout<<"print the matrix : \n"<<endl;
    for(int i=0 ; i<rowSize ; i++){
        for(int j=0 ; j<colSize ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0 ;
}