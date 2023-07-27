#include<bits/stdc++.h>
using namespace std;
unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiognolCheck;
unordered_map<int,bool> bottomLeftDiognolCheck;

void printSolution(vector<vector<char>> &board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row,int col,vector<vector<char>>& board,int n){

    // ****************backtracking logic ******************
    if(rowCheck[row]==true){
        return false;
    }
    if(upperLeftDiognolCheck[n-1+col-row]==true){
        return false;
    }
    if(bottomLeftDiognolCheck[row+col]==true){
        return false;
    }
    return true;



    // ****************simple logic**************************
    // // check karna chahte hai ki current cell pe queen safe hai ki nahi
    // int i=row;
    // int j=col;

    // // check row mean left side queen hai ki nahi
    // // Ex. - - - -
    // //     R R Q -
    // //     <---row=i R=row change of col=j can change to j-- check for row in 'Q' can Exixt or not j>=0 than 'Q' not Exixt
    // while(j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     j--;
    // }
    // // check upper left diognal          
    // // Ex. U - - -
    // //     - U - -
    // //     - - Q -
    // // U mean upper left diognal can change acording to row and col mean i-1 and j-1 
    // i=row;
    // j=col;
    // while(i>=0 && j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }
    // // check bottom left diognal
    // // Ex. - - - -
    // //     - - Q -
    // //     - B - -
    // //     B - - -
    // // B=bottom left diognal check to change acording to row and col mean i+1 and j-1
    // i=row;
    // j=col;
    // while(i<n && j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // return true;

}

void solve(vector<vector<char>>& board,int col,int n){
    // base case
    if(col>=n){
        printSolution(board,n);
        return ;
    }

    // 1 case solve karna hai baki recursion sambhal lega
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            // rakh do
            board[row][col]='Q';

            // Map logic to reduc time complexity
            rowCheck[row]=true;
            upperLeftDiognolCheck[n-1+col-row]=true;
            bottomLeftDiognolCheck[row+col]=true;

            // recursion solution laega
            solve(board,col+1,n);
            // backtraking
            board[row][col]='-';
            // Map logic to reduc time complexity
            rowCheck[row]=false;
            upperLeftDiognolCheck[n-1+col-row]=false;
            bottomLeftDiognolCheck[row+col]=false;
        }
    } 
}


int main()
{
    int n=4;
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;
    // '-' -> Queen not place
    // 'Q' -> Queen can place
    solve(board,col,n);


    return 0;
}