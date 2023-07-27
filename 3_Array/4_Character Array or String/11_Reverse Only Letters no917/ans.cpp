#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/reverse-only-letters/

bool OnlyLetter(char& a){
    if((a>='A' && a<='Z') || (a>='a' && a<='z')){
        return true;
    }
    else{
        return false;
    }
}
string reverce(string& str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        if (OnlyLetter(str[s]) && OnlyLetter(str[e])){
            swap(str[s++],str[e--]);
        }
        else if(OnlyLetter(str[s])==false){
            s++;
        }
        else if(OnlyLetter(str[e])==false){
            e--;
        }
    }
    return str;
}
int main()
{
    string s="a-bC-dEf-ghIj";
    cout<<reverce(s);
    return 0;
}