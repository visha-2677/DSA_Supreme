#include<bits/stdc++.h>
using namespace std;
bool Binary_Search_2DArray(vector<vector<int>> arr,int key){
    int row=arr.size();
    int col=arr[0].size();
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        //mid valu can match with 2d array in mid (eliment represent)
        int element=arr[mid/col][mid%col];
        if(element==key){
            cout<<"Fond :"<<mid/col<<mid%col<<endl;
            return true;
        }
        else if(element<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main()
{
    vector<vector<int>> arr={
        {1,2,3},
        {4,5,6}
    };
    cout<<Binary_Search_2DArray(arr,6);
    return 0;
}