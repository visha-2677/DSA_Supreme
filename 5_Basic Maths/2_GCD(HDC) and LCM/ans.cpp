#include<bits/stdc++.h>
using namespace std;
// link : https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//GCD mean Uqlid algorithm
//a=24 -->2*2*2*3
//b=72 -->2*2*2*3*3
//equvale 2*2*2*3=24
//gcd(24,72)-->gcd(24,24)-->return a
//gcd(a-b,b) or gcd(a%b,b) Math equation
//Other lcm(a,b)*ged(a,b)= a*b
// int GCD(int a,int b){
//     if(a==0){
//         return b;
//     }
//     if(b==0){
//         return a;
//     }
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }
// simple approch
int GCD(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a==0 ? b:a;
}

// Recursive approch
// int GCD(int a,int b){
//     if(a==0)return b;
//     if(b==0)return a;
//     if(a>b){
//         return GCD(a-b,b);
//     }
//     else{
//         return GCD(a,b-a);
//     }
// }
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
}