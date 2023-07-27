#include<bits/stdc++.h>
using namespace std;
void ReverceQueue(queue<int> &q){
    stack<int> st;
    //step 1: put all elements of q into s
    while(!q.empty()){
        int element=q.front();
        q.pop();
        st.push(element);
    }
    //step2: put all element from stackinto q
    while(!st.empty()){
        int element=st.top();
        st.pop();
        q.push(element);
    }
}
void ReverceQueueRecursion(queue<int> &q){
    // base case
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    ReverceQueueRecursion(q);
    q.push(temp);
}

// Firt K ELement Reverce in Queue
void FirstKElementReverce(queue<int> &q,int k){
    stack<int> s;
    int count=0;
    int n=q.size();
    if(k<=0 || k>n){
        return ;
    }
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;
        if(count==k){
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    //step C: push n-k element from q front to back 
    // cout<<endl<<q.front()<<endl;
    count=0;
    while(!q.empty() && n-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k)
            break;
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // ReverceQueue(q);
    // ReverceQueueRecursion(q);
    FirstKElementReverce(q,3);
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}