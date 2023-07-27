#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    int i=0,j=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<n && j<m){
        while(i+1<n && arr1[i]==arr1[i+1]) i++;
        while(j+1<m && arr2[j]==arr1[j+1]) j++;
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
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
    vector<int> arr1={1,2,3,4,4,6,8};
    vector<int> arr2={3,4,4,9,10};
    printV(Intersection(arr1,arr2));
    return 0;
}