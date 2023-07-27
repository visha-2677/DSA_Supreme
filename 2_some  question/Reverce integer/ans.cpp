#include<bits/stdc++.h>
using namespace std;
// Leet code link (Ctr+Enter)
// https://leetcode.com/problems/reverse-integer/
int ReverceInteger(int n){
    int ans=0,i=0;
    while(n!=0){
        int bit=n%10;
        ans=ans*10+bit;
        n=n/10;
    }
    return ans;
}
int main()
{
    cout<<ReverceInteger(123);
    return 0;
}