#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void Sort01(vector<int>& arr){
    int s=0;
    int e=arr.size()-1;

    while(s<e){
        if(arr[s]==0){
            s++;
        }
        else if(arr[e]==1){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    
}

int main()
{
    vector<int> arr={0,1,0,1,1,0};
    Sort01(arr);
    printV(arr);
    return 0;
}