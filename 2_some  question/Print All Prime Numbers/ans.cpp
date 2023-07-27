#include<bits/stdc++.h>
using namespace std;
bool PrimeorNot(int n){
    if(n==1) return true;
    for(int i=2;i<n;i++){
    // for(int i=2;i<=sqrt(n);i++){//i don't know how but some time to identify 
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
void PrintAllPrimeNumber(int n){
    for(int i=1;i<=n;i++){
        if(PrimeorNot(i)){
            cout<<i<<" ";
        }
    }
}
int main()
{   
    PrintAllPrimeNumber(10);
    
    return 0;
}