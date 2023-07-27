#include<bits/stdc++.h>
using namespace std;
void SubarrayPrinting(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

// tc : O(n^2)
// sc : O(n)
void RESubarrayPrinting_util(int arr[],int n,int start,int end){
    // base case
    if(end==n) return ;

    // 1 case solve
    // for(int i=start;i<n;i++){
    //     int end=start;
    //     RESubarrayPrinting_util(arr,n,start,end);
        // for(int j=i;j<=end;j++){
        for(int j=start;j<=end;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        RESubarrayPrinting_util(arr,n,start,end+1);
    // }
}
void RESubarrayPrinting(int arr[],int n){
    for(int start=0;start<n;start++){
        int end=start;
        RESubarrayPrinting_util(arr,n,start,end);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    // SubarrayPrinting(arr,5);
    RESubarrayPrinting(arr,5);
    return 0;
}