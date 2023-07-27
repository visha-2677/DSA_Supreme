#include<bits/stdc++.h>
using namespace std;
void insertionAtBottom(stack<int> &st,int &target){
    if(st.empty()){
        st.push(target);
        return ;
    }
    int topElement=st.top();
    st.pop();
    insertionAtBottom(st,target);
    st.push(topElement);
}

void ReverceStack(stack<int> &st){
    if(st.empty()){
        return ;
    }
    int target=st.top();
    st.pop();
    ReverceStack(st);
    insertionAtBottom(st,target);
}


int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // int target=st.top();
    // st.pop();
    ReverceStack(st);
    cout<<" Printing..."<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}