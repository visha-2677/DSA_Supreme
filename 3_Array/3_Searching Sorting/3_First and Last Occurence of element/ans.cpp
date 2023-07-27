#include<bits/stdc++.h>
using namespace std;
int First_Occurence(vector<int> arr,int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int Last_Occurence(vector<int> arr,int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
vector<int> arr={1,2,2,2,2,4,5};

    cout<<"First Occurence: "<<First_Occurence(arr,2)<<endl;
    cout<<"Last Occurence: "<<Last_Occurence(arr,2);
    return 0;
}