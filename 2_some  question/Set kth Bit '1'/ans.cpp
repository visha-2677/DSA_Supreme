#include<bits/stdc++.h>
using namespace std;
// Greek code link (Ctr+Enter)
// https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
int setKthBit(int N, int k){
    // Write Your Code here
    int mask=1<<k;
    int ans=N | mask;
    return ans;
}
int main(){
    cout<<setKthBit(10,2);
    return 0;
}
    