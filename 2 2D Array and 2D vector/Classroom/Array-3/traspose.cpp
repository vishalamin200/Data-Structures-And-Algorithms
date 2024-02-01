#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int> > &mat){
    cout<<"Printing the matrix : "<<endl;
    for(int i=0 ; i<mat.size() ; i++){
        for(int j=0 ; j<mat[i].size() ; j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }    
}

void input(vector<vector<int> > &mat){    // passing value by reference to store in acutal mat
    cout<<"Enter elements : ";
    cout<<mat.size()<<" "<<mat[0].size();
    for(int i=0 ; i<mat.size() ; i++){
        vector<int> temp;
        for(int j=0 ; j<mat[0].size() ; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }   
}

int main(){
    int rows ,cols;
    cout<<"NO. of rows and columns : ";
    cin>>rows>>cols;
    vector<vector<int> > mat(rows , vector<int>(cols,0));
    
    input(mat);
    print(mat);
    return 0 ;
}