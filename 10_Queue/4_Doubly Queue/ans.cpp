#include<bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void pushRear(int data){
        // Queue is full
        if((front==0 && rear==size-1) || (rear==front-1)){
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
    void pushFront(int data){
        // Queue is full
        if((front==0 && rear==size-1) || (rear==front-1)){
            cout<<"Q is full"<<endl;
            return ;
        }
        // First element handle
        else if(front==-1){
            front=rear=0;
            arr[front]=data;
        }
        // circular nature handle
        else if((rear!=size-1)&& front==0){
            front=size-1;
            arr[front]=data;
        }
        // Normal
        else{
            front--;
            arr[front]=data;
        }
    }
    void popFront(){
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
            arr[front]=-1;
            front=0;
        }
        // normal
        else{
            arr[front]=-1;
            front++;
        }
    }
    void popRear(){
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
        else if(rear==0){
            arr[rear]=-1;
            rear=size-1;
        }
        // normal
        else{
            arr[rear]=-1;
            rear--;
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
    Deque c(10);
    c.pushRear(10);
    c.pushRear(30);
    c.pushFront(20);
    c.pushFront(40);
    c.pushFront(50);
    c.pushFront(60);
    c.pushFront(70);
    c.pushFront(80);
    c.pushFront(90);
    c.pushFront(100);
    // c.pushFront(200);

    // c.popFront();
    // c.popFront();
    // c.popRear();
    // c.popRear();

    c.print();
    return 0;
}