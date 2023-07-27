#include <bits/stdc++.h>
using namespace std;
// code link : https://leetcode.com/problems/find-k-closest-elements/

// Method 1: two pointer approch to decrese length and find range of output 
// tc : O(n-k)
vector<int> Find_K_Closest_Element1(vector<int> arr, int k, int x)
{
    int l = 0;
    int h = arr.size() - 1;
    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    // vector<int> ans;
    // for (int i = l; i <= h; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // return ans;
    
    // use STL to reduce code // this vector not print last element than use arr.begin()+h+1 in '+1'
    return vector<int>(arr.begin()+l,arr.begin()+h+1);
}
// Method 2: binary search + two pointer approch to increce length and find range of output
// tc : 
// lower bound mean x element not present than return next element 
// Upper bound mean x element present and not present than return avery time next element
int lower_bound(vector<int> arr,int x){
    int s=0;
    int e=arr.size()-1;
    // int ans=-1;
    int ans=e;//test case not work than use {3,5,8,10} k=2 and x=15 than 10>=15 nahi hoga 
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=x){ //than 10>=15 nahi hoga  is liye ans=-1 return hoga than ans=e last index return karega
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
vector<int> Find_K_Closest_Element2(vector<int> arr, int k, int x)
{
    int h = lower_bound(arr,x);
    int l = h-1;
    while (k--)
    {
        if( l<0) { //x=-1 than this condition work
            h++;
        }
        else if(h>=arr.size()){
            l--;
        }

        else if (x - arr[l] > arr[h] - x)
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    
    // use STL to reduce code // begin+l+1 and begin+h because of already is one index are ++ and -- than +1 and -1 
    return vector<int>(arr.begin()+l+1,arr.begin()+h);
}
void printarr(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector <int> arr={20,30,36,45,50,55};
    printarr(Find_K_Closest_Element1(arr,4,45));
    cout<<endl;
    printarr(Find_K_Closest_Element2(arr,4,45));
    return 0;
}