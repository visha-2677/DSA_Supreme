#include<bits/stdc++.h>
using namespace std;
void print2d(vector<vector<int> > arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Transpoce(vector<vector<int> > arr,vector<vector<int>> trans){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            trans[i][j]=arr[j][i];
        }
    }
    
    
}
int main()
{
    vector<vector<int>> arr={{1,2,3},
                             {4,5,6}
                             ,{7,8,9}};
    vector<vector<int>> trans;
    Transpoce(arr,trans);
    print2d(trans);
    return 0;
}