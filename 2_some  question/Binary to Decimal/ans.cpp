#include<bits/stdc++.h>
using namespace std;
int BinarytoDecimal(int n){
    int i=0,Dec=0;
    while(n>0){
        int bit=n%10;
        Dec=Dec+bit*pow(2,i);
        i++;
        n=n/10;
    }
    return Dec;
}
int main()
{
    cout<<BinarytoDecimal(111);
    return 0;
}