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

void RERemoveSubstring(string& s,string& part){
    int pos=s.find(part);
    if(pos!= string::npos){
        string left_part=s.substr(0,pos);
        string right_part=s.substr(part.size()+pos,s.size());
        s=left_part + right_part;
        RERemoveSubstring(s,part);
    }
    else{
        return ;
    }
}
int main()
{
    string s="aabcbcgha";
    string part="abc";
    cout<<RemoveSubstring(s,part)<<endl;
    RERemoveSubstring(s,part);
    cout<<s;
    return 0;
}