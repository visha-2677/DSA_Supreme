#include<bits/stdc++.h>
using namespace std;
bool isPossible(int n,int k,vector<int> &stalls,int mid){
        int CowCount=1;
        int lastPos=stalls[0];
        for(int i=0;i<stalls.size();i++){
            if(stalls[i]-lastPos>=mid){
                CowCount++;
                if(CowCount==k) return true;
                lastPos=stalls[i];
            }
        }
        return false;
}
int solve(int n, int k, vector<int> &stalls) {
    
    // Write your code here
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=(s+e)>>1;
    while(s<=e){
        if(isPossible(n,k,stalls,mid)){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)>>1;
    }
    return ans;
}
int main()
{
    vector<int> s={1 ,2 ,4 ,8 ,9};
    cout<<solve(5,3,s);
    return 0;
}