#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void LeftRotate(vector<int>& arr,int k){
    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[i]=arr[(i+k)%arr.size()];
    }
    for(int i=0;i<arr.size();i++){
        arr[i]=temp[i];
    }
    
}
int main()
{
    vector<int> arr={1,2,3,4};
    LeftRotate(arr,1);
    printV(arr);
    return 0;
}