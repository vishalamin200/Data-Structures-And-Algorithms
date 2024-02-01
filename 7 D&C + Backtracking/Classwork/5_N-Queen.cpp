#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<int>>& board, int size){
    cout<<"\n\n";
    for(int i=0 ; i<size ;i++){
        for(int j=0 ; j<size ;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
}

bool isSafe(vector<vector<int> >& board , int size, int row, int col){
    //same rows me check karo
    int i = row;
    int j= col;
    while(j >= 0){
        if(board[i][j] == 1){
            return false;
        }
        j--;
    }

    //lower diagonal me check karo
    i= row;
    j= col;
    while(i <size && j >=0 ){
        if(board[i][j] == 1){
            return false;
        }
        i++;
        j--;
    }

    // upper diagoal 
     i = row ;
     j = col;
     while(i>=0 && j>=0){
        if(board[i][j] == 1 ){
            return false;
        }
        i--;
        j--;
     }

     return true;
}

void placeQueen(vector<vector<int>>& board , int size, int row , int col){
    //base case
    if(col >= size){
        printBoard(board,size);
        return ;
    }

    // ek col me queeen place karado , baki col me recursion place kardega

    for(int row=0 ; row<size ; row++){
        if(isSafe(board,size,row,col)){
            // now it is safe to place queen
            board[row][col] =1;

            placeQueen(board,size,row, col+1);

            // backtracking
            board[row][col] = 0;
        }
    }
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<vector<int>> board(size,vector<int>(size,0));
    int row =0 ;
    int col =0;

    placeQueen(board,size,row,col);
     
    return 0 ;
}