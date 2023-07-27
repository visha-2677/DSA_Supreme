#include<bits/stdc++.h>
using namespace std;
// link : https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
bool isPossible(int A[],int N,int mid,int M){
        int studentCount=1;
        int pagesum=0;
        for(int i=0;i<N;i++){
            
            // Har bar check karna padega arr[i] + pagesum is less than mid valu
            if(pagesum+A[i]<=mid){
                pagesum+=A[i];
            }
            else{
                studentCount++;
                pagesum=A[i];
                if(studentCount>M || A[i]>mid ){
                    return false;
                }
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        //code here
        int s=0;
        // int sum=0;
        // for(int i=0;i<N;i++){
        //     sum+=A[i];
        // }
        int e=accumulate(A,A+N,0);
        int ans=-1;
        int mid=s+e>>1;
        while(s<=e){
            if(isPossible(A,N,mid,M)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+e>>1;
        }
        return ans;
    }
int main()
{
    int arr[]={12 ,34 ,67 ,90};
    cout<<findPages(arr,4,2);
    return 0;
}