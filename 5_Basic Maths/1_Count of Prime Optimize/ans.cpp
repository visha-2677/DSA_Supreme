#include<bits/stdc++.h>
using namespace std;
// link :https://leetcode.com/problems/count-primes/description/
// Naive approch pass 17 test cases
//Complexcity is O(n^2)
// bool isPrimeNumber(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int Count_Prime_Number(int n){
//     int cnt=0;
//     for(int i=2;i<n;i++){
//         if(isPrimeNumber(i)){
//             cnt++;
//             cout<<i<<" ";
//         }
//     }
//     return cnt;
// }


// Sqrt approch pach 20 test cases
//Complexcity is O(n^2) but some optimize
// bool isPrimeNumber(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int Count_Prime_Number(int n){
//     int cnt=0;
//     for(int i=2;i<n;i++){
//         if(isPrimeNumber(i)){
//             cnt++;
//             cout<<i<<" ";
//         }
//     }
//     return cnt;
// }

// Sieve of Eratosthenes approch
//Complexcity is O(n*(log(log(n))))
//n/2+n/3+n/7+n/11+.......
//n*(1/2+1/3+1/7+1/11+.........)
//O(n*(log(log(n)))---->Tailer Searies
//Use Sieve of Eratoshthenes Theory
//(1) Mark every No as Prime Number
//(2) JO Table mean N number ME a raha he ushe Non Prime kardo or Jo prime hai ushke sare mutiple Number ko Non prime kardo
//Example n=15  
//2 3 4 5 6 7 8 9 10 11 12 13 14 15
//2 is prime than 4 6 8 10 12 14 is Not Prime So On
int Count_Prime_Number(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);
    //vector<Type> prime(kitni Size,sab box array me true valu dal do)
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;                     //prime[i]=2 is prime
            for(int j=2*i;j<n;j=j+i){ // j=2*2 to n-1 
                prime[j]=0;           // prime[4]=0 do j=4+2
            }                         // prime[6]=0 do j=6+2
        }
    }
    //extra work print prime number
    // for(int i=2;i<n;i++){
    //     if(prime[i]==true)
    //     cout<<i<<" ";
    // }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<endl<<Count_Prime_Number(n);
}
//Home Work Segmented Sieve Read