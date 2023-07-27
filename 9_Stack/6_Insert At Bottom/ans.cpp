#include<bits/stdc++.h>
using namespace std;
void insertionAtBottom(stack<int> &st,int &target){
    if(st.empty()){
        st.push(target);
        return ;
    }
    int topElement=st.top();
    st.pop();
    solve(st,target);
    st.push(topElement);
}



int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int target=st.top();
    st.pop();
    insertionAtBottom(st,target);
    cout<<" Printing..."<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}