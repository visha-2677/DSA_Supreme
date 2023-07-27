#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/palindromic-substrings/
int ExpandArounIndex(string s,int i,int j){
        int cnt=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int cnt=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            // odd
            int oddKaAns=ExpandArounIndex(s,i,i);
            cnt=cnt+oddKaAns;
            // even
            int evenKaAns=ExpandArounIndex(s,i,i+1);
            cnt=cnt+evenKaAns;
        }
        return cnt;
    }
int main()
{
    string s="abc";
    cout<<countSubstrings(s);
    return 0;
}