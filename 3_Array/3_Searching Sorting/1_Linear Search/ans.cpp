#include<bits/stdc++.h>
using namespace std;
int  Liner_Search(vector<int> arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
}
int main()
{
    vector<int> arr={1,2,3,4};
    cout<<Liner_Search(arr,3);
    return 0;
}