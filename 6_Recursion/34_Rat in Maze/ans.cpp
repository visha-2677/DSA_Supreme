#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
char direction[4]={'D','L','R','U'};
bool isSafe(int i,int j,int row,int col,vector<vector<int>> arr,vector<vector<bool>>& visited){
    // three condition
    if(((i>=0 && i<row) && (j>=0 && j<col) && (arr[i][j]==1) && (visited[i][j]==false))){
        return true;
    }
    else{
        return false;
    }
}
void SolveMaze(vector<vector<int>> arr,int row,int col,int i,int j,vector<vector<bool>>& visited,vector<string>& path,string Output){
    // base case
    if(i==row-1 && j==col-1){
        // answer found
        path.push_back(Output);
        return ;
    }
    
// for small code 
    for(int k=0;k<4;k++){
        int newx=i+dx[k];
        int newy=j+dy[k];
        char dir=direction[k];
    if(isSafe(newx,newy,row,col,arr,visited)){
        visited[newx][newy]=true;
        SolveMaze(arr,row,col,newx,newy,visited,path,Output+dir);
        // back track
        visited[newx][newy]=false;
        }
    }

    // // Down ->i+1,j
    // if(isSafe(i+1,j,row,col,arr,visited)){
    //     visited[i+1][j]=true;
    //     SolveMaze(arr,row,col,i+1,j,visited,path,Output+'D');
    //     // back track
    //     visited[i+1][j]=false;
    // }
    // // Left ->i,j-1
    // if(isSafe(i,j-1,row,col,arr,visited)){
    //     visited[i][j-1]=true;
    //     SolveMaze(arr,row,col,i,j-1,visited,path,Output+'L');
    //     // back track
    //     visited[i][j-1]=false;
    // }
    // // Right ->i,j+1
    // if(isSafe(i,j+1,row,col,arr,visited)){
    //     visited[i][j+1]=true;
    //     SolveMaze(arr,row,col,i,j+1,visited,path,Output+'R');
    //     // back track
    //     visited[i][j+1]=false;
    // }
    // // Up ->i-1,j
    // if(isSafe(i-1,j,row,col,arr,visited)){
    //     visited[i-1][j]=true;
    //     SolveMaze(arr,row,col,i-1,j,visited,path,Output+'U');
    //     // back track
    //     visited[i-1][j]=false;
    // }


}
int main()
{
    vector<vector<int>> arr={{1,0,0},
                             {1,1,0},
                             {1,1,1}};
    if(arr[0][0]==0){
        cout<<"No Solution Exist"<<endl;
        return 0;
    }
    int row=arr.size();
    int col=arr[0].size();
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string> path;
    string Output="";
    SolveMaze(arr,row,col,0,0,visited,path,Output);

    cout<<"Print ans"<<endl;
    for(auto i: path){
        cout<<i<<" ";
    }
    cout<<endl;
    if(path.size()==0){
        cout<<"No path exist";
    }
    return 0;
}