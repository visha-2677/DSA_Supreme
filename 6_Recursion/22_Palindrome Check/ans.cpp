#include<bits/stdc++.h>
using namespace std;
// bool Palindrome(string str,int s,int e){
//     while(s<=e){
//         if(str[s]==str[e]){
//             s++;
//             e--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// tc : O(n)
// sc : O(n)
bool REPalindrome(string str,int s,int e){
    if(s>=e) return true;

    if(str[s]!=str[e]){
        return false;
    }
    
    return REPalindrome(str,s+1,e-1);
}
int main()
{
    string s="abcba";
    cout<<REPalindrome(s,0,s.length()-1);
    return 0;
}