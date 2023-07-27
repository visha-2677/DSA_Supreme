#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
string removeAdjecentDuplicates(string s){
    string ans="";
        for(int i=0;i<s.length();i++){
                if(ans.length()>0  && ans[ans.length()-1] == s[i] ){
                    ans.pop_back();
                }
                else{
                    ans.push_back(s[i]);
                }
            
        }
        return ans;
}
int main()
{
    string s="abbac";
    string ans=removeAdjecentDuplicates(s);
    cout<<ans;
    return 0;
}