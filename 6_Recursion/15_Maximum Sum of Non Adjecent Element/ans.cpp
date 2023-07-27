#include<bits/stdc++.h>
using namespace std;
void Solve(vector<int>& arr,int i,int sum,int& maxi){
    //base case
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return ;
    }

    // include
    Solve(arr,i+2,sum+arr[i],maxi);
    // exclude
    Solve(arr,i+1,sum,maxi);
}
int main()
{
    // vector<int> arr={1,2,3,4,5,6};
    vector<int> arr={2,1,4,9};
    int i=0;
    int maxi=INT_MIN;
    int sum=0;
    Solve(arr,i,sum,maxi);
    cout<<maxi;
    return 0;
}
Problem of Maximum Sum of Non adjecent element for some test case not anderstand
Ex 1: arr[]={1,2,3,4,5,6} in 
sum=12  (pattern index is 1 like sum=2+4+6=12 )
in Live class
Ex 2: arr[]={ 2,1,4,9} in 
ans=11 (pattern index is 0 like sum=2+9=11)
Uppern Ex1 logic every time  can add element only i+2 than why 2+9 ?
Ex1 logic in apply Ex2 than sum=1+9=10 but in code sum=11 