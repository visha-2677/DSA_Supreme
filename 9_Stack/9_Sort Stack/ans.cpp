#include<bits/stdc++.h>
using namespace std;
void InsertedSorted(stack<int> &st,int &target){
    if(st.empty()){
        st.push(target);
        return ;
    }
    if(st.top() >= target){
        st.push(target);
        return ;
    }
    int topElement=st.top();
    st.pop();
    InsertedSorted(st,target);
    st.push(topElement);
}
void SortStack(stack<int> &st){
    if(st.empty()){
        return ;
    }
    int target=st.top();
    st.pop();
    SortStack(st);
    InsertedSorted(st,target);
}


int main()
{
    stack<int> st;
    st.push(10);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(50);
    // int target=st.top();
    // st.pop();
    SortStack(st);
    cout<<" Printing..."<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}