#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/valid-palindrome-ii/
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
bool checkPalindrom(string str,int s,int e){
    while(s<=e){
            if(str[s]==str[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
    }
    return true;
}
bool validPalindrome(string str){
        int s=0;
        int e=str.length()-1;
        while(s<=e){
            if(str[s]==str[e]){
                s++;
                e--;
            }
            else{
                return checkPalindrom(str,s+1,e) || checkPalindrom(str,s,e-1);
            }
        }
        return true;
}
int main()
{
    string s="abca";
    cout<<validPalindrome(s);
    return 0;
}