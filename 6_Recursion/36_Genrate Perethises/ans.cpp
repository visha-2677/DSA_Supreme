#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/generate-parentheses/submissions/922327107/
void printans(vector<string>& ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

void solve(vector<string>& ans,int n,int open,int close,string output){
    // base case
    if(open==0 && close==0){
        ans.push_back(output);
    }

    // include open parenthesis
    // Open parenthesis hoga tabhi to include kar paaege
    if(open>0){
        output.push_back('(');
        solve(ans,n,open-1,close,output);
        // back track
        output.pop_back();
    }

    // include close parenthesis
    // Open parenthesis hoga tabhi to include kar paaege
    if(open<close){
        output.push_back(')');
        solve(ans,n,open,close-1,output);
        output.pop_back();
    }

}
int main()
{
    vector<string> ans;
    int n=3;
    int open=n;
    int close=n;
    string output="";
    solve(ans,n,open,close,output);
    printans(ans);
    return 0;
}