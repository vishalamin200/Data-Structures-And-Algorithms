// create a vector of vector mat in which no. of rows is as per user and number of cols in each rows
// is also as per user requiredment ;

/*  example : rows? --> 3
rows 0 size ? --> 5
enter elemetns -->  0 9 8 7 6
row1 size?? -->2 
enter elements --> 9 9
row2 size --> 1
enter element --> 8

output: 
0 9 8 7 6 
9 9 
8

*/

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
    int rows , cols;
    cout<<"Number of rows : ";
    cin>>rows;

    for(int i=0 ; i<rows ; i++){
        cout<<"NO. of cols in "<<i<<" row : ";
        cin>>cols;
        vector<int> temp;
        cout<<"enter elements : ";
        for(int j=0 ; j<cols ; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }   
}


int main(){
    int rows , cols ;
    vector<vector<int> > mat ;
    input(mat);
    print(mat); 
    return 0 ;
}