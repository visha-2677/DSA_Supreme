#include<bits/stdc++.h>
using namespace std;
// in this pivot element is basically is 1
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
// this pivot element basically is 7
int Find_Pivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]) return mid;
        if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid-1;
        if(arr[s]>=arr[mid]){
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
    vector<int> arr={3,4,5,6,7,1,2};
    cout<<Find_Pivot(arr);

    return 0;
}