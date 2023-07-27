#include<bits/stdc++.h>
using namespace std;
void printMaxMin(int arr[],int n,int i,int& max,int& min){
    if(i>=n) return ;
    if(max<arr[i]){
        max=arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
    cout<<arr[i]<<" ";
    printMaxMin(arr,n,i+1,max,min);
}
// void print(int arr[],int n){
//     // if(n<=0) return ;
//     // print(arr,n-1);
//     // cout<<arr[n-1]<<" ";

//     // if(n==0) return ;
//     // cout<<arr[0]<<" ";
//     // print(arr+1,n-1);
// }
int main()
{
    int arr[]={10,20,30,40};
    int maxi=INT_MIN;
    int mini=INT_MAX;
    printMaxMin(arr,4,0,maxi,mini);
    cout<<endl<<maxi<<" "<<mini<<endl;
    // print(arr,4);
    return 0;
}