#include<bits/stdc++.h>
using namespace std;
bool SortedArray(int arr[],int n,int i){
    if(i==n-1) return true;
    if(arr[i]<=arr[i+1]) {
        SortedArray(arr,n,i+1);
    }
    else{
        return false;
    }
}

int main()
{
    int arr[]={1,1,1,1,1};
    cout<<SortedArray(arr,5,0);
    return 0;
}