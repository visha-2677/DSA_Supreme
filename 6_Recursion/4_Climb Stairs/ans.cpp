#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/climbing-stairs/
int ClimbStairs(int n){
    if(n==0 || n==1) return 1;
    return ClimbStairs(n-1)+ClimbStairs(n-2);
}
int main()
{

    cout<<ClimbStairs(3);
    return 0;
}