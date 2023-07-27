#include<bits/stdc++.h>
using namespace std;

vector<int> PreviousSmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());
    for(int i=0;i<input.size();i++){
        int curr=input[i];
        while(s.top()!=-1 && input[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    // print(ans);
    return ans;
}

vector<int> NextSmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());
    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];
        while(s.top()!=-1 && input[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    // print(ans);
    return ans;
}

int LogestAreaOfHistogram(vector<int> &hights){
    vector<int> prev=PreviousSmallerElement(hights);
    vector<int> next=NextSmallerElement(hights);

    int maxArea=INT_MIN;
    int size=hights.size();
    for(int i=0;i<hights.size();i++){

        int length=hights[i];

        if(next[i]==-1){
            next[i]=size;
        }

        int width=next[i]-prev[i]-1;
        int Area=length*width;
        maxArea=max(maxArea,Area);
        
    }
    return  maxArea;
}


int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout << "Ans is: " << LogestAreaOfHistogram(v) << endl;
    return 0;
}

