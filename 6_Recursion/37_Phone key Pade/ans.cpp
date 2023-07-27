#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>& ans,int index,string output,vector<string>& mapping,string digits){
    // base case
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    // 1 case solve kardo 
    int digit=digits[index]-'0';
    string valu=mapping[digit];
    for(int i=0;i<valu.length();i++){
        char ch=valu[i];
        output.push_back(ch);
        solve(ans,index+1,output,mapping,digits);
        // back track
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
     vector<string> ans;
    //  for One case digts empty
     if(digits.length()==0){
         return ans;
     }
     int index=0;
     string output="";
     vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     solve(ans,index,output,mapping,digits);
     return ans;
}
int main()
{
    string digits="23";
    vector<string> ans=letterCombinations(digits);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}