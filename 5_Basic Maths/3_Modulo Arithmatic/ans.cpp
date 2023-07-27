#include<bits/stdc++.h>
using namespace std;
// link : https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// Normal Method
// tc : O(b)
int NormalExponentiation(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}
// Modulo mehtod this link in use modulo m
// link : https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// Modulo method  mean module use in question like large integer of ans than store use in modulo than ans return 
// use %m in proble solve than like this opration can large number of interger range can false it than use %m every opration and return ans in  %m to return like upprer link in solve question
// tc : log(b)
int FastExponentiation(int a,int b){
    long long int ans=1;
    while(b>0){
        if(b&1){//odd condition
            //  odd
            ans=(ans*a) ;
        }
        a=a*a;
        b>>=1;//b=b/2;
    }
    return ans;
}
int main()
{
    cout<<NormalExponentiation(2,5)<<endl;
    cout<<FastExponentiation(2,5)<<endl;
    return 0;
}