#include<bits/stdc++.h>
using namespace std;
// tc = O(log(2^(logm)-1)) better than binary search o(log(n))
// Application mean use for Exponential Search
// -->Search in infinite(♾️) array(unbounded array)
//     Algo:Search x in infinite(♾️) arr[] than use Exponential Search 
//          *infinite array in not find ending than find x element in particular range of starting and ending
//              i=0;
//              j=0;
//              while(arr[j]<x){
//                  i=j; //i=starting index
//                  j=j*2;//j=ending index
//              }
//              binary_search(arr,i,j,x);
// -->Better than Binary Search (x is near Beging)
int binary_search(vector<int> arr,int s,int e,int key){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key)  s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return -1;
}
int Exponential_Search(vector<int> arr,int n,int key){
    if(arr[0]==key) return 0;
    int i=1;

    while(arr[i]<=key && i<n){
        i=i*2;
    }
    return binary_search(arr,i/2,min(i,n-1),key);  //why min(i,n-1) ? because of ex like i=n-1 element of array than i*2 than array to i is arry range to upper than binary search in i/2=start but i is not = end than n-1 = end use 
}
int main()
{
    vector<int> arr={2, 3, 4, 10, 40};
    cout<<Exponential_Search(arr,5,10);
    return 0;
}