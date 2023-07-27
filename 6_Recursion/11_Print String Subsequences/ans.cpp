#include<bits/stdc++.h>
using namespace std;
void StringSubsequences(string Input,string Output,int i,vector<string>& ans){
    if(i>=Input.length()){
        // cout<<Output<<endl;
        ans.push_back(Output);
        return ;
    }
    // exlude
    StringSubsequences(Input,Output,i+1,ans);

    // include
    Output.push_back(Input[i]);
    StringSubsequences(Input,Output,i+1,ans);
}
int main()
{
    string Input="abc";
    string Output="";
    vector<string> ans;
    int i=0;
    StringSubsequences(Input,Output,i,ans);
    cout<<"All subsequences "<<endl;
    for(auto str:ans){
        cout<<str<<" ";
    }
    cout<<endl<<"ans size 2^n=2^3 : "<<ans.size();

    return 0;
}