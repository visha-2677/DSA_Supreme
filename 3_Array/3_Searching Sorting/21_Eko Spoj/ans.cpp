#include<bits/stdc++.h>
using namespace std;
// https://www.spoj.com/problems/EKO/
bool isPossible(vector<long long int> trees,long long int woodRequested,long long int mid){
    long long int collectWood=0;
    for(int i=0;i<trees.size();i++){
        if(trees[i]>mid ){
        collectWood+=(trees[i]-mid);
        }
    }
    // cout<<"mid  "<<mid<<" :"<<collectWood<<" "<<endl;
    if(collectWood>=woodRequested){
        return true;
    }
    return false;
}
long long int Eko(vector<long long int> trees,long long int woodRequested){
    long long int s=0;
    long long int e=*max_element(trees.begin(),trees.end());
    long long int ans=-1;
    while(s<=e){
        long long int mid=(s+e)>>1;
        if(isPossible(trees,woodRequested,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    // vector<int> NoWood={4 ,42 ,40 ,26 ,46};
    // int woodRequested=20;
    // cout<<Eko(NoWood,woodRequested);

    long long int n,woodRequested;
    cin>>n>>woodRequested;
    vector<long long int> trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<<Eko(trees,woodRequested);
    return 0;
}