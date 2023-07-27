#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/isomorphic-strings/
bool isIsomorphic(string s, string t) {
        int hash[256] ={0};
        int ischarMapped[256] ={0};
        for(int i=0;i<s.length();i++){
            if(hash[s[i]] == 0 && ischarMapped[t[i]] == 0){
                hash[s[i]]=t[i];
                ischarMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.length();i++){
            if(char(hash[s[i]])!= t[i]){
                return false;
            }
        }
        return true;
}
int main()
{
    // string s="aab";
    string s="asb";
    string t="eff";
    cout<<isIsomorphic(s,t);
    
    return 0;
}