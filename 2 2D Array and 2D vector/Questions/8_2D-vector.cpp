// declaration , taking input and printing the 2d vector 

#include<iostream>
#include<vector>
using namespace std;

int main(){
   int rows , int cols ; 
   cout<<"Enter rows and cols  : " ;
   cin>>rows>>cols;

   vector<int , vector<int> > mat(rows , vector<int>(cols,5));

   for(int i = 0 ; i<rows ; i++){
    for(int j=0 ; j<cols ;j++){
        int test ;
        cin>>test;
        mat.push_back(test);
    }
   }
}