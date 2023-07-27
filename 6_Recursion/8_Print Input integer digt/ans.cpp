#include<bits/stdc++.h>
using namespace std;

void printdigit(int n){
    if(n==0) return ;
    int digit=n%10;
    printdigit(n/10);
    cout<<digit<<" ";
}
int main()
{
    int i=123;
    printdigit(i);
    return 0;
}