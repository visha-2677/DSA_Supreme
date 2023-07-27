#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/valid-anagram/submissions/
 
bool isAnagram(string s, string t) {
// Method 1: sort 
// tc: O(nlogn)
    if(s.length()!=t.length()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) return true;
    else{
        return false;
    }

// M2 : Count Occurence to compare
// tc : O(n+m) 
    int freq[256]={0};
    for(int i=0;i<s.length();i++){
        // store Occurenc
        freq[s[i]]++;
    }
    for(int j=0;j<t.length();j++){
        // compare to s string occurence to decrease in freq array
        freq[t[j]]--;
    }
    for(int k=0;k<256;k++){
        if(freq[k]!=0) return false;
    }
    return true;
}
int main()
{
    
    return 0;
}