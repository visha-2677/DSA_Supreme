#include<bits/stdc++.h>
using namespace std;

// tc : O(nlogn)
int Merge(int* arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    // create len1 and len2 daynamic array
    int *left= new int[len1];
    int *right= new int[len2];

    // copy valu of arr (main array) to left and right of array
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }

    // Merge
    int leftIndex=0;
    int rightIndex=0;
    int MainArrayIndex=s;//line no 15 logic in code

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[MainArrayIndex++]=left[leftIndex++];
        }
        else{
            arr[MainArrayIndex++]=right[rightIndex++];
        }
    }
    // copy valu of left and right array
    while(leftIndex<len1){
        arr[MainArrayIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[MainArrayIndex++]=right[rightIndex++];
    }
}

void MergeSort(int* arr,int s,int e){
    // base case
    // s==e than One Element
    // s>e is invalide Element
    if(s>=e){
        return;
    }

// Recursive to dived in to One element of Sorted Array
    int mid=(s+e)/2;
    // left part sort
    MergeSort(arr,s,mid);

    // right part sort
    MergeSort(arr,mid+1,e);

// One ELement of Sorted Array can Merge
    Merge(arr,s,e);
}
int main()
{
    int arr[]={3,5,1,2};
    int n=4;
    int s=0;
    int e=n-1;
    MergeSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}