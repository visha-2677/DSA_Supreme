#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/longest-common-prefix/
string LongestCommanPrefix(vector<string>& str){
    string ans;
    int i=0;
    while(true){
        char curr_ch=0;
        for(auto firstch:str){
            if(i>= firstch.size()){
                curr_ch=0;
                break;
            }
            if(curr_ch==0){
                curr_ch=firstch[i];
            }
            else if(firstch[i] != curr_ch){
                curr_ch=0;
                break;
            }
        }
        if(curr_ch==0){
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}
int main()
{
    vector<string> arr={"abc","abcdd","abd"};
    cout<<LongestCommanPrefix(arr);
    
    
    return 0;
}