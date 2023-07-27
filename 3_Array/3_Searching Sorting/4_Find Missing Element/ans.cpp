#include<bits/stdc++.h>
using namespace std;
int Find_Missing_element(vector<int> arr){
    if(arr[0]!=1){
        return 1;
    }
    if(arr[arr.size()-1]!=arr.size()+1) return (arr.size()+1);
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while((e-s)>1){
        if((arr[s]-s)!=(arr[mid]-mid)){
            e=mid;
        }
        else if((arr[e]-e)!=(arr[mid]-mid)){
            s=mid;
        }
        mid=s+(e-s)/2;
    }
    return (arr[s]+1);
}
int main()
{
    vector<int> arr={1,2,3,4,6};
    cout<<Find_Missing_element(arr);
    return 0;
}