#include<bits/stdc++.h>
using namespace std;
vector<int> PreviousSmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());
    for(int i=0;i<ans.size();i++){
        int curr=input[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
vector<int> NextSmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());
    for(int i=ans.size()-1;i>=0;i--){
        int curr=input[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    vector<int> ans=NextSmallerElement(v);
    
    cout<<" Printing..."<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    vector<int> ans1=PreviousSmallerElement(v);
    cout<<endl;
    cout<<" Printing..."<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans1[i]<<" ";
    }
    return 0;
}