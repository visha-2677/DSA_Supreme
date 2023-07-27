#include<bits/stdc++.h>
using namespace std;
bool stringfindkey(string s,int i,int n,char key){
    if(i>=n) return false;
    if(s[i]==key) return true;
    return stringfindkey(s,i+1,n,key);
}
int main()
{
    string s="abc";
    cout<<stringfindkey(s,0,s.length(),'c');
    return 0;
}