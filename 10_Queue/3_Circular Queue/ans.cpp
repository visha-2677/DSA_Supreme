#include<bits/stdc++.h>
using namespace std;
class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data){
        // Queue is full
        if((front==0 && rear==size-1) || (rear==front-1)){
            // Other Condition
        // if(rear==(front-1)%(rear-1)){
            cout<<"Q is full"<<endl;
            return ;
        }
        // First element handle
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
        // circular nature handle
        else if((rear==size-1)&& front!=0){
            rear=0;
            arr[rear]=data;
        }
        // Normal
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        // empty case
        if(front==-1){
            cout<<"Q is empty"<<endl;
            return ;
        }
        // single element
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        // circular nature
        else if(front==size-1){
            front=0;
        }
        // normal
        else{
            arr[front]=-1;
            front++;
        }
    }
    // Only for view not code in write
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{   
    CirQueue c(10);
    c.push(10);
    c.push(20);
    c.push(30);
    c.push(40);
    c.push(50);
    c.push(60);
    c.push(70);
    c.push(80);
    c.push(90);
    c.push(100);
    // c.push(100);
    // c.pop();
    // c.pop();
    // c.push(200);
    // c.push(300);
    // c.push(400);

    c.print();
    return 0;
}