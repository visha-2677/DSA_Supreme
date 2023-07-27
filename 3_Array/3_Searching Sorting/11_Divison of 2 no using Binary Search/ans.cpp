#include<bits/stdc++.h>
using namespace std;
int Divison_of_2no_BinarySearch(int divided,int divisor){
    int s=0;
    int e=abs(divided);
    int mid=s+(e-s)/2;
    int ans=0;
    if(divisor==1){
        return divided;
    }
    if(divisor==-1){
        return -divided;
    }
    while(s<=e){
        int valu=abs(divided/divisor);
        if(valu>=mid){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        // if(abs(mid*divisor)>abs(divided)){
        //     e=mid-1;
        // }
        // else{
        //     ans=mid;
        //     s=mid+1;
        // }
        mid=s+(e-s)/2;
    }
    if((divided<0 && divisor<0)|| (divided>0 && divisor>0)){
        return ans;
    }
    else {
        return (-ans);
    }
}
double More_Prision(double ans,int divided,int divisor,int prision){
    double add=0.1;
    for(int i=0;i<prision;i++){
        for(double j=ans;j*divisor<=divided;j=j+add){
            ans=j;
        }
        add=add/10;
    }
    return ans;
}
int main()
{
    double ans=Divison_of_2no_BinarySearch(147,4);
    cout<<More_Prision(ans,147,4,2);
    return 0;
}