#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Max Heap
    priority_queue<int> Maxq;
    // Min Heap
    priority_queue<int,vector<int>,greater<int>> Minq;

    Maxq.push(100);
    Maxq.push(50);
    Maxq.push(20);
    Maxq.push(60);
    Maxq.push(30);

    Minq.push(100);
    Minq.push(50);
    Minq.push(20);
    Minq.push(60);
    Minq.push(30);


    cout<<"Top Element: "<<Maxq.top()<<endl;
    Maxq.pop();
    cout<<"Top Element: "<<Maxq.top()<<endl;
    Maxq.pop();
    cout<<"Top Element: "<<Maxq.top()<<endl;
    Maxq.pop();
    cout<<"Top Element: "<<Maxq.top()<<endl;
    Maxq.pop();
    cout<<"Top Element: "<<Maxq.top()<<endl;
    Maxq.pop();
    cout<<"size:"<<Maxq.size()<<endl;
    if(Maxq.empty()){
        cout<<"q is empty"<<endl;
    }
    else{
        cout<<"q is not empty"<<endl;
    }


    cout<<"Top Element: "<<Minq.top()<<endl;
    Minq.pop();
    cout<<"Top Element: "<<Minq.top()<<endl;
    Minq.pop();
    cout<<"Top Element: "<<Minq.top()<<endl;
    Minq.pop();
    cout<<"Top Element: "<<Minq.top()<<endl;
    Minq.pop();
    cout<<"Top Element: "<<Minq.top()<<endl;
    Minq.pop();
    cout<<"size:"<<Minq.size()<<endl;
    if(Minq.empty()){
        cout<<"q is empty"<<endl;
    }
    else{
        cout<<"q is not empty"<<endl;
    }
    return 0;
}