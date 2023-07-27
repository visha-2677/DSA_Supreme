#include<bits/stdc++.h>
using namespace std;
int main()
{

    // Dynamic Allocation for 1D Array
    // creation of 1d Array
    int *arr=new int[5];
    // // printing
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    // de-allocation
    delete []arr;

    
    // Dynamic Allocation for 2D Array
    // creation of 2d Array
    // int row=5;
    // int col=3;
    // int **arr=new int*[5];
    // for(int i=0;i<row;i++){
    //     arr[i]=new int[col];
    // }
    // // printing
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // de-allocation
    // Left vala part delete (new int*[5])
    // for(int i=0;i<row;i++){
    //     delete []arr[i];
    // }
    // Right vala part delete (int **arr)
    // delete []arr;


    return 0;
}