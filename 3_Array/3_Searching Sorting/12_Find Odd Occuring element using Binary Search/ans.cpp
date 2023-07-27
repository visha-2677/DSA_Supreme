#include<bits/stdc++.h>
using namespace std;
int Find_Odd_Occuring_Element_BinarySearch(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e) return mid;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                // because of already check mid+1 condition
                s=mid+2;
            }
            else{
                // because of e is may ans than e=mid not e=mid-1
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                // not check mid+1 condition
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr={1,1,2,2,3,3,2,2,600,600,4,5,5};
    cout<<arr[Find_Odd_Occuring_Element_BinarySearch(arr)];
    cout<<Find_Odd_Occuring_Element_BinarySearch(arr);
    return 0;
}