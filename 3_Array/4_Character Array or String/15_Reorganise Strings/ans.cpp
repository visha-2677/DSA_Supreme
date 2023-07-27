#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/reorganize-string/submissions/911449527/
string Reorganice(string s){
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        // char ch=s[i];
        // int count=0;
        // count=ch-'a';
        // hash[count]++;
        hash[s[i]-'a']++;
    }
    char mostFreqChar;
    int maxi=0;
    for(int i=0;i<26;i++){
        if(maxi<hash[i]){
            mostFreqChar=i+'a';
            maxi=hash[i];
        }
    }
    int index=0;
    while(maxi>0 && index<s.length()){
        s[index]=mostFreqChar;
        maxi--;
        index+=2;
    }
    if(maxi !=0){
        return "";
    }
    hash[mostFreqChar -'a']=0;

    // place other characters
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            index=index>=s.length() ? 1:index;
            s[index]=i+'a';
            index+=2;
            hash[i]--;
        }
    }
    return s;
}
int main()
{
    string s="aabc";
    cout<<Reorganice(s);
    return 0;
}