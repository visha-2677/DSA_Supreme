#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    cout<<"Size of Queue :"<<q.size()<<endl;

    q.pop();

    cout<<"Size of Queue :"<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue Empty!"<<endl;
    }
    else{
        cout<<"Queue not Empty!"<<endl;
    }
    cout<<"Front ELement: "<<q.front()<<endl;
    
    return 0;
}