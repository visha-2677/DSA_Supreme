#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int *arr;
    int top;
    int size;

    public:

    Stack(int size){
        arr=new int(size);
        this->size=size;
        top=-1;
    }

    // function
    void push(int data){
        if(size-top>1){
            // space available
            // insert
            top++;
            arr[top]=data;
        }
        else{
            // space not available
            cout<<"Over Flow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Under Flow"<<endl;
        }
        else{
            // stack is not empty
            top--;
        }
    }

    int getTop(){
        if(top==-1){
            cout<<"There is not element in stack"<<endl;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
                                                        
};
int main()
{
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }cout<<endl;
    cout<<"size of stack:  "<<s.getSize()<<endl;
    // s.pop();
    return 0;
}