#include<bits/stdc++.h>
using namespace std;
void printMiddleElementOfStack(stack<int> &s,int &totalsize){
    if(s.size()==0)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }
    if(s.size()==totalsize/2+1){
        cout<<"Middle Element is :"<<s.top()<<endl;
        return ;
    }
    int temp=s.top();
    s.pop();
    // recursive call 
    printMiddleElementOfStack(s,totalsize);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);
    int totalsize=s.size();
    printMiddleElementOfStack(s,totalsize);

    return 0;
}