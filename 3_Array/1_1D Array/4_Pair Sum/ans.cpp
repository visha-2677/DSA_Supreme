#include<bits/stdc++.h>
using namespace std;
vector<int> PairSum(vector<int> arr,int k){
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    return ans;
}
void printV(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    printV(PairSum(arr,3));
    return 0;
}