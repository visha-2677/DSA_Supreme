#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> arr,int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr={1,2,3,4};
    cout<<Binary_Search(arr,4);
    return 0;
}