#include<bits/stdc++.h>
using namespace std;
int Squre_Root(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        ans=mid*mid;
        if(n==ans){
            return mid;
        }
        else if(n<ans){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double Find_More_Perision(int n,double ans,int prision){
    double step=0.1;
    for(int i=0;i<prision;i++){
        for(double j=ans;j*j<=n;j=j+step){
            ans=j;
        }
        step=step/10;
    }
    return ans;
}
int main()
{
    double ans=Squre_Root(68);
    cout<<Find_More_Perision(68,ans,4);
    return 0;
}