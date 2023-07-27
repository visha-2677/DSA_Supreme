#include<bits/stdc++.h>
using namespace std;
// int Find_Pivot(vector<int> arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[0]<=arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
int Find_Pivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]) return mid;
        if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid-1;
        if(arr[s]>=arr[mid]){
            e=mid-1;
        }
        else{
            s=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int Binary_Search(vector<int> arr,int s,int e,int key){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int Search_Sorted_Roatated(vector<int> arr,int key){
    int s=0;
    int e=arr.size()-1;
    int pivot=Find_Pivot(arr);
    while(s<=e){
        // if(key>=arr[pivot] && key<=arr[arr.size()-1]){//first pivot function
        if(key>=arr[pivot+1] && key<=arr[arr.size()-1]){
            // return Binary_Search(arr,pivot,arr.size()-1,key);//first pivot function
            return Binary_Search(arr,pivot+1,arr.size()-1,key);
        }
        else{
            return Binary_Search(arr,0,pivot,key);
        }
    }
}
int main()
{
    vector<int> arr={4,5,1,2,3};
    cout<<Search_Sorted_Roatated(arr,4);
    return 0;
}