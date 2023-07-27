#include<bits/stdc++.h>
using namespace std;
int PrintSetBits(int n){
    int cnt=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
            cnt++;
        }
        n=n/10;
    }
    return cnt;
}
int main()
{
    cout<<PrintSetBits(100100111);
    return 0;
}