#include<bits/stdc++.h>
using namespace std;
int DecimaltoBinary(int n){
    int ans=0,i=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+bit*pow(10,i);
        i++;
        n=n>>1;
    }
    return ans;
}

int main()
{
    //check in on online compiler
    cout<<DecimaltoBinary(7);
    return 0;
}