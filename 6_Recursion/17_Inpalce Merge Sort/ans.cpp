#include<bits/stdc++.h>
using namespace std;
// withount using extra space
// findout complexity
// tc : O(nlogn)
// link : https://www.geeksforgeeks.org/in-place-merge-sort/
void Merge(int arr[],int s,int e,int mid){
    int s2=mid+1;
    // allready two sorted array can merge
    if(arr[mid]<=arr[s2]){
        return ;
    }

    while(s<=mid && s2<=e){
        if(arr[s]<=arr[s2]){
            s++;
        }
        // not  greater than of arr[s]>arr[2]
        else{
            // use valu because not override the arr[s2]
            int valu=arr[s2];
            // because can use s2 insex for condition of while loop to stop while  loop than s2 can store in insex 
            int index=s2;
            while(index!=s){
                arr[index]=arr[index-1];
                index--;
            }
            // Override date can store exact index 
            arr[s]=valu;

            // update all pointer becasue can change of two sorted array  all pointer increase by 1
            s++;
            mid++;
            s2++;
        }
    }
}

void InplaceMergeSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

    // Recursive to divide One element of sorted array
    // left part of One element of sorted arrays creat
    InplaceMergeSort(arr,s,mid);

    // right part of One element of sorted arrays creat
    InplaceMergeSort(arr,mid+1,e);

    // Merge One element sorted array
    Merge(arr,s,e,mid);
}
int main()
{
    
    int arr[]={5,4,3,2,1};
    int n=5;
    int s=0;
    int e=n-1;
    InplaceMergeSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}