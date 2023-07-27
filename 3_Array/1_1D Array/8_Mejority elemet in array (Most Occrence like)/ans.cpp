#include<bits/stdc++.h>
using namespace std;
int Occurence(vector<int> arr,int x){
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            cnt++;
        }
    }
    return cnt;
}
int MaxiOccurence(vector<int> arr){
    int maxi=-1;
    for(int i=0;i<arr.size();i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}
int MejorityElement(vector<int> arr){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        ans.push_back(Occurence(arr,arr[i]));
    }
    return MaxiOccurence(ans);
}
int main()
{
    vector<int> arr={1,2,2,4,4,4,4,5,5,5,5,5,5};
    cout<<MejorityElement(arr);
    return 0;
}