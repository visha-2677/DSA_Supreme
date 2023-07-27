#include<iostream>
using namespace std;
int main(){
    // pointer to int is creted, and pointing to some garbage address 
    // int *q;
    // cout<<*q<<endl;//randome addresh can point this is worng
    // int *p=0;//NULL pointer
    // int *p=NULL;//NULL pointer
    // int *p=nullptr;//NULL pointer
    // cout<<*p<<endl; //segmentation error but in compiler not viewp

    // int a=10;
    // int *p=&a;
    // double b=12;
    // double *e=&b;
    // char c='a';
    // char* q=&c;
    // cout<<"Valu of a:"<<a<<endl;
    // cout<<"Valu of a to pointer of p:"<<*p<<endl;
    // cout<<"Valu of address a:"<<&a<<endl;
    // cout<<"Valu of address a to p pointer:"<<p<<endl;
    // cout<<"Valu of address  p pointer:"<<&p<<endl;
    // cout<<"size of a"<<sizeof(a)<<endl;
    // cout<<"All pointer is store address than use same memory size can use"<<endl;
    // cout<<"size of pointer"<<sizeof(p)<<endl;
    // cout<<"size of pointer"<<sizeof(e)<<endl;
    // cout<<"size of pointer"<<sizeof(q)<<endl;

    //Why? 
    // int c=10;
    // int d=c;
    // d++;
    // cout<<c<<endl;
    // cout<<d<<endl;
    // cout<<"Only can change d Not c"<<endl;

    //Than Use Pointer
    // int c=10;
    // int *d=0;//use null pointer after use
    // d=&c;
    // (*d)++;
    // cout<<c<<endl;
    // cout<<*d<<endl;
    // cout<<"Pointing d to c than change c"<<endl;
    // cout<<"before d :"<<d<<endl;
    // d=d+1;//--> Than Address can Update size of int/cha/double increment 4 byte
    // cout<<"after d :"<<d<<endl;

    // two pointer can poin same variable mean copy of pointer
    int a=5;
    int* ptr=&a;
    int* ptr1=ptr;//copy of pointer
    cout<<*ptr1<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;
}