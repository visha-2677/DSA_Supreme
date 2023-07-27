#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
string RemoveSubstring(string s,string part){
       int pos=s.find(part);
        while(pos!= string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
}
int main()
{
    string s="aabcbcgha";
    string part="abc";
    cout<<RemoveSubstring(s,part);
    return 0;
}