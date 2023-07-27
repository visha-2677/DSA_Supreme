#include<bits/stdc++.h>
using namespace std;
int MinimumNumberSumElement(vector<int>& arr,int target){
    // base case
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=MinimumNumberSumElement(arr,target-arr[i]);
        if(ans != INT_MAX){
        mini=min(mini,ans+1);
        }
    }
    return mini;
    
}
int main()
{
    vector<int> arr={1,2};
    cout<<MinimumNumberSumElement(arr,5);
    return 0;
}