#include<bits/stdc++.h>
using namespace std;
// Video linke: https://www.youtube.com/watch?v=sV4RhDIIKO0
// link : https://www.geeksforgeeks.org/inversion-count-in-array-using-merge-sort/

long long BhrutforceInvCount(int arr[],int n){
    long long Inv_Count=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            Inv_Count++;
        }
    }
    return Inv_Count;
}

// tc : O(nlogn)
long long MergeInvCount(int* arr,int s,int e){

    long long Inv_Count=0;
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
            // all left[leftIndex]>right[rightIndex] than all left[0],left[1],lef[2],...left[len1] >right[rightindex] becasue two sorted array than Inv_Count+=len1-leftindex; (0,1,2,..=leftIndex)
            Inv_Count+=len1-leftIndex;
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

    return Inv_Count;
}

long long MergeSortInCountInv(int* arr,int s,int e){
    long long Inv_Count=0;
    // Inv_Count is called array in arr[0]>arr[1] than is called inversion count like Bhrutforce code 

    // base case
    // s==e than One Element
    // s>e is invalide Element
    // if(s>=e){
    //     return;
    // }
    // for void function
if(s<e){

// Recursive to dived in to One element of Sorted Array
    int mid=(s+e)/2;
    // left part sort
    // Why Inv_Count+= ? because every Recursiv call return Inv_Count than add in Inv_Count 
    Inv_Count+=MergeSortInCountInv(arr,s,mid);

    // right part sort
    Inv_Count+=MergeSortInCountInv(arr,mid+1,e);

// One ELement of Sorted Array can Merge
    Inv_Count+=MergeInvCount(arr,s,e);
}
    return Inv_Count;
}
int main()
{
    int arr[]={ 1, 20, 6, 4, 5 };
    int n=5;
    int s=0;
    int e=n-1;
    cout<<BhrutforceInvCount(arr,n)<<endl;
    cout<<MergeSortInCountInv(arr,s,e)<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}