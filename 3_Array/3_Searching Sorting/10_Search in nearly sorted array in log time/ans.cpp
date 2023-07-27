#include<bits/stdc++.h>
using namespace std;
int Binary_Search_NearlySortedArray(vector<int> arr,int key){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(mid<e && arr[mid+1]==key){
            return mid+1;
        }
        else if(mid>s && arr[mid-1]==key){
            return mid-1;
        }
        else if(arr[mid]<key){
            s=mid+2;
        }
        else if(arr[mid]>key){
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr={10, 3, 40, 20, 50, 80, 70};
    cout<<Binary_Search_NearlySortedArray(arr,40);
    return 0;
}