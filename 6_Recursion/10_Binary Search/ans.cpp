#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int key,int s,int e){
    if(s>e){
        return -1;
    }
        int mid=(s+e)>>1;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            BinarySearch(arr,key,s,mid-1);
        }
        else{
            BinarySearch(arr,key,mid+1,e);
        }
}
int main()
{
    int arr[]={1,2,3,4};
    int k=3;
    int n=4;
    cout<<BinarySearch(arr,k,0,n-1);
    return 0;
}