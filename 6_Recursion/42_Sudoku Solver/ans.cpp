#include <bits/stdc++.h>
using namespace std;
void printboard(vector<vector<int>> &board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(int k,vector<vector<int>> &board,int i,int j,int n){
    // row check
    for(int col=0;col<9;col++){
        if(board[i][col]==k){
            return false;
        }
    }
    // col check
    for(int row=0;row<9;row++){
        if(board[row][j]==k){
            return false;
        }
    }
    // 3*3 check
    for(int index=0;index<9;index++){
        // board[ startingPoint for Row=3*(i/3) + MovementPoint for Row=(index/3) ][ startingPoint for col=3*(j/3) + MovementPoint for Col=(index%3)]
        if(board[ 3*(i/3) + (index/3) ][ 3*(j/3) + (index%3)]==k){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>> &board, int n)
{
    // base case not use in recursion
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                for(int k=1;k<=9;k++){
                    // check for is k is safe or not
                    if(isSafe(k,board,i,j,n)){
                        // insert valu
                        board[i][j]=k;
                        // baki recursion dambhal lega
                        bool aageKaSolution= solve(board,n);
                        if(aageKaSolution==true){
                            return true;
                        }
                        // backtraking
                        board[i][j]=0;
                    }
                }
                // if 1 to 9 tak koi solution k nahi nikla than mean piche kahi par galti hue hai go bak by returning false
            return false;
            }
        }
    }
    // Why true? because sare ke sare board ke solution fill ho gaye hai than return true to close function
    return true;
}
int main()
{
    vector<vector<int>> board = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                                 {6, 0, 0, 1, 9, 5, 0, 0, 0},
                                 {0, 9, 8, 0, 0, 0, 0, 6, 0},
                                 {8, 0, 0, 0, 6, 0, 0, 0, 3},
                                 {4, 0, 0, 8, 0, 3, 0, 0, 1},
                                 {7, 0, 0, 0, 2, 0, 0, 0, 6},
                                 {0, 6, 0, 0, 0, 0, 2, 8, 0},
                                 {0, 0, 0, 4, 1, 9, 0, 0, 5},
                                 {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    int n=9;
    solve(board, n);
    printboard(board,n);
    return 0;
}