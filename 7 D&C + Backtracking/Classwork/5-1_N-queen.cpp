#include<iostream>
#include<vector>
#include<math.h>
#include<unordered_map>
using namespace std;


unordered_map<int,bool>rowCheck;
unordered_map<int,bool>upperDiagonalCheck;
unordered_map<int,bool>lowerDiagonalCheck;

void printBoard(vector<vector<char>>& board, int size){
    cout<<"\n\n";
    for(int i=0 ; i<size ;i++){
        for(int j=0 ; j<size ;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
}

// bool isSafe(vector<vector<char> >& board , int size, int row, int col){
//     //same rows me check karo
//     int i = row;
//     int j= col;
//     while(j >= 0){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//         j--;
//     }

//     //lower diagonal me check karo
//     i= row;
//     j= col;
//     while(i <size && j >=0 ){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//         i++;
//         j--;
//     }

//     // upper diagoal 
//      i = row ;
//      j = col;
//      while(i>=0 && j>=0){
//         if(board[i][j] == 'Q' ){
//             return false;
//         }
//         i--;
//         j--;
//      }
//      return true;
// }


bool isSafe2(vector<vector<char> >& board , int size, int row, int col){
    if(rowCheck[row] == true){
        return false;
    }
    if(upperDiagonalCheck[size + (col-row)] == true){
        return false;
    }
    if(lowerDiagonalCheck[row+col] == true){
        return false;
    }
    return true;
}

void placeQueen(vector<vector<char>>& board , int size, int row , int col){
    //base case
    if(col >= size){
        printBoard(board,size);
        return ;
    }
    

    // ek row me queeen place karado , baki rows me recursion place kardega

    for(int row=0 ; row<size ; row++){
        if(isSafe2(board,size,row,col)){
            // now it is safe to place queen
            board[row][col] = 'Q';

            rowCheck[row] = true;
            upperDiagonalCheck[size + (col-row)] = true;
            lowerDiagonalCheck[col+row] = true;

            placeQueen(board,size,row, col+1);

            // backtracking
            board[row][col] = '-';

            rowCheck[row] = false;
            upperDiagonalCheck[size + (col-row)] = false;
            lowerDiagonalCheck[col+row] = false;
        }
    }
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<vector<char>> board(size,vector<char>(size,'-'));
    int row =0 ;
    int col =0;

    int count =0 ;

    placeQueen(board,size,row,col);
  
    return 0 ;
}