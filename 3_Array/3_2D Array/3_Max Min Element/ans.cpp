#include<bits/stdc++.h>
using namespace std;
int Max(vector<vector<int>> arr){
    int max=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int Min(vector<vector<int>> arr){
    int min=1;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    vector<vector<int>> ans={{1,2,3},
                             {4,5,6}
                             ,{7,8,9}};
    cout<<Max(ans)<<endl;

    cout<<Min(ans);
    return 0;
}