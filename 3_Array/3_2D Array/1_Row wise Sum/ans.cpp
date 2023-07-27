#include<bits/stdc++.h>
using namespace std;
void RowWiseSum(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=0;j<arr[i].size();j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}
int main()
{
    vector<vector<int>> ans={{1,2,3},
                             {4,5,6}
                             ,{7,8,9}};
    RowWiseSum(ans);
    return 0;
}