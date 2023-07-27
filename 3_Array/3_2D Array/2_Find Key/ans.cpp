#include<bits/stdc++.h>
using namespace std;
bool FindKey(vector<vector<int>> arr,int key){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> ans={{1,2,3},
                             {4,5,6}
                             ,{7,8,9}};
    cout<<FindKey(ans,3);
    return 0;
}