#include<bits/stdc++.h>
using namespace std;
int KthSmallestElementInHeap(int arr[],int n,int k){
    // Max Heap Use
    priority_queue<int> q;
    for(int i=0;i<k;i++){
        q.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<q.top()){
            q.pop();
            q.push(element);
        }
    }
    int ans=q.top();
    return ans;
}
int KthLargestElementInHeap(int arr[],int n,int k){
    // Min Heap Use
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<k;i++){
        q.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element>q.top()){
            q.pop();
            q.push(element);
        }
    }
    int ans=q.top();
    return ans;
}
int main()
{
    int arr[]={10,50,20,40,30};
    int k=1;
    cout<<KthSmallestElementInHeap(arr,5,k)<<endl;
    cout<<KthLargestElementInHeap(arr,5,k);
    return 0;
}