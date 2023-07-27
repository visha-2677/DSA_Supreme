#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/group-anagrams/
// N : strs.length();
// K : length of longest string
// tc: O(NKlogK)
// sc: O(NK)
// Method1 : Map can use to mapping
vector<vector<string>> groupAngrams(vector<string>& strs){
    // map<string,vector<string>> mp;
    // for(auto str:strs){
    //     string s=str;
    //     sort(s.begin(),s.end());
    //     mp[s].push_back(str);
    // }

    // vector<vector<string>> ans;
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     ans.push_back(it->second);
    // }
    // return ans;

    
}
// Method2 : Hash loop can use to mapping
std::array<int,256> hash(string s){
    std::array<int,256> hash={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAngrams(vector<string>& strs){

    map<std::array<int,256>,vector<string> >mp;
    // map<string,vector<string>> mp;
    for(auto str:strs){
        mp[hash(str)].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it=mp.begin();it!=mp.end();it++){
        ans.push_back(it->second);
    }
    return ans;

    
}
int main()
{
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans=groupAngrams(strs);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}