#include<bits/stdc++.h>
using namespace std;
vector<int> PairSum(vector<int> arr,int M){
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==M){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
            }
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
    printV(PairSum(arr,6));
    return 0;
}