#include<bits/stdc++.h>
using namespace std;
int Uniq(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={1,1,2,3,3,4,4};
    cout<<Uniq(arr,7);
    
    return 0;
}