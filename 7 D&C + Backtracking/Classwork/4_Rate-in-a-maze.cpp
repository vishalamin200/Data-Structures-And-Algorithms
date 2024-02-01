// Rat in a maze

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int maze[][4], vector<vector<bool>>& visited , int row, int col , int i , int j){
    // 3 conditions - 1. i and j index ke under hona chahiye , maze me 1 hona chahiye , and visited me false hona chahiye

    if(( i>=0 && i<row)&&(j>=0 && j<col) && (maze[i][j] == 1 ) && (visited[i][j] == false)){
        return true;
    }
    return false;
}



void solve(int maze[][4], vector<vector<bool>>& visited , int row, int col , vector<string>& ans, string output , int i , int j ){

    // base case 
    if(i == row-1 && j==col-1){
        ans.push_back(output);
        return ;
    }


    // Down jaha hai  - row change col same (i = i+1) col - j

    if(isSafe(maze,visited,row,col,i+1,j)){
        visited[i+1][j] = true;

        solve(maze,visited ,row,col,ans,output+'D', i+1 , j);
        
        //backtracking
        visited[i+1][j] = false;
    }

    //left jaha hai , same row me  col decrease hogi
    if(isSafe(maze,visited,row,col,i,j-1)){
        visited[i][j-1] = true;

        solve(maze,visited ,row,col,ans,output+'L', i, j-1);
        
        //backtracking
        visited[i][j-1] = false;
    }

    // right jana hai , same row me col increase hogi

    if(isSafe(maze,visited,row,col,i,j+1)){
        visited[i][j+1] = true;

        solve(maze,visited ,row,col,ans,output+'R', i , j+1);
        
        //backtracking
        visited[i][j+1] = false;
    }

    //Up jaha hai , row-> decrease hogi, same col me
    if(isSafe(maze,visited,row,col,i-1,j)){
        visited[i-1][j] = true;

        solve(maze,visited ,row,col,ans,output+'U', i-1 , j);
        
        //backtracking
        visited[i-1][j] = false;
    }
}


// alternative way 

void solveMaze(int maze[][4], vector<vector<bool>>& visited , int row, int col , vector<string>& ans, string output , int i , int j ){

    //base case
    if(i == row-1 && j==col-1){
        ans.push_back(output);
        return ;
    }

    char dire[4] = {'D','L','R','U'};
    int dx[4] = {1,0,0,-1};
    int dy[4] = {0,-1,1,0};

    for(int k=0 ; k<4 ;k++){
        int newX = i + dx[k];
        int newY = j + dy[k];

        if(isSafe(maze, visited,row,col, newX, newY)){
            visited[newX][newY] = true;

            solveMaze(maze,visited,row,col,ans,output+ dire[k], newX, newY);

            //backtracking
            visited[newX][newY] = false;
        }

    }
}


int main(){
    
    int maze[4][4] = {1,0,0,0,
                      1,1,0,0,
                      1,1,0,0,
                      0,1,1,1
                     };
    
    vector<vector<bool>> visited (4,vector<bool>(4,false));
    int row = visited.size();
    int col = visited[0].size();

    visited[0][0] = true;

    int i=0 ,j =0 ;
    vector<string>ans;
    string output = "";

    // solve(maze,visited ,row ,col,ans,output, i , j);
    solveMaze(maze,visited,row,col,ans,output,i,j);

    cout<<"path posible are : "<<endl;
    for(auto string : ans){
        cout<<string<<endl;
    }

    return 0 ;
}