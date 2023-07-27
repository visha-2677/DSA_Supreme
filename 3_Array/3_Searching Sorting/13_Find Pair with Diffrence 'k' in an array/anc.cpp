#include<bits/stdc++.h>
using namespace std;
// cod link : https://leetcode.com/problems/k-diff-pairs-in-an-array/
// tc : O(nlogn)
// Method 1: two pointer approch
int FindPairDiffrenceK1(vector<int> arr,int k){
    // int cnt=0;
    set<pair<int,int>> ans;
    sort(arr.begin(),arr.end());
    int i=0,j=1;
    while(j<arr.size()){
        if(arr[j]-arr[i]==k){
            // cnt++;
            // cout<<arr[i]<<" "<<arr[j]<<endl;
            ans.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if(arr[j]-arr[i]>k){
            i++;
        }
        else{
            j++;
        }
        if(i==j) j++;//test case for {1,1,3,5,4} k=0 than pair this step not use than 
    }
    // return cnt;//why because test case of {1,1,1,1} k=0 me cnt=4 but not righte but righte cnt=1 unique paire ia count than use set<pair<int,int>> ans; ans is only unique pair store 
    return ans.size(); 
}


// Method 2: Binary approch
int binary_search(vector<int> arr,int s,int e,int key){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key)  s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return -1;
}
int FindPairDiffrenceK2(vector<int> arr,int k){
    set<pair<int,int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int diff=k+arr[i];
        if(binary_search(arr,i+1,arr.size()-1,diff)!=-1){
            ans.insert({arr[i],arr[i]+k});
        }
    }
    return ans.size();
}
int main()
{
    vector<int> arr={1,1,1,1};
    cout<<FindPairDiffrenceK1(arr,0);
    cout<<FindPairDiffrenceK2(arr,0);

    return 0;
}