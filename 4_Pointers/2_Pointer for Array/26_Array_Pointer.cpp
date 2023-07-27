#include<iostream>
using namespace std;
int main(){
    int a[4]={1,3,5,4};
    // int *p=a;
    // cout<<"First eliment Address : "<<a<<endl;
    // cout<<"First eliment Address not pointer like print address of pointer beacause of array ek khud hi pointer hai not use extra pointer : "<<&a<<endl;//this not work for pointer use like
    // cout<<"First eliment Address : "<<p<<endl;//this not work for pointer use like
    // cout<<"Address of pointer P  : "<<&p<<endl;//this not work for pointer use like
    // cout<<"First eliment Address : "<<&a[0]<<endl;
    // cout<<"First eliment valu : "<<*a<<endl;
    // cout<<"First eliment valu : "<<a[0]<<endl;
    // cout<<"that's not second valu is called first valu in add by 1 : "<<*a+1<<endl;
    // cout<<"Second eliment valu : "<<*(a+1)<<endl;
    // cout<<"Second eliment valu : "<<a[1]<<endl;
    // cout<<"third eliment valu : "<<*(a+2)<<endl;
    // cout<<"third eliment valu : "<<a[2]<<endl;
    
    // //Equvation : a[i]=*(a+i) <---> i[a]=*(i+a)
    // int i=2;
    // cout<<"third eliment valu : "<<a[i]<<endl;
    // cout<<"third eliment valu : "<<i[a]<<endl;
    // cout<<"third eliment valu : "<<*(i+a)<<endl;

    cout<<"First eliment Address"<<endl;
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<"Size of address and eliment"<<endl;
    cout<<"size of a :"<<sizeof(a)<<endl;
    cout<<"size of address a[0] :"<<sizeof(&a)<<endl;
    cout<<"size of valu a[0] :"<<sizeof(*a)<<endl;
    int *p=&a[0];
    cout<<&p<<endl;
    cout<<&*p<<endl;
    cout<<p<<endl;
    cout<<"Pointer size :"<<sizeof(p)<<endl;
    cout<<"Pointer size :"<<sizeof(&p)<<endl;
    cout<<"valu of a[0] size :"<<sizeof(*p)<<endl;

    // int a[10];
    // // a=a+1;//Error Not change Location of array than use poiter to increment print sub array 
    // // int *p=&a;//Generate Error because of pointer in array particualr location eliment can point
    // int *p=&a[0];//pointer use in array than array to show subpart of array 
    // int *q=a+1;//pointer use in array than array to show subpart of array 
    // cout<<q<<endl;
    // cout<<"after :"<<p<<endl;
    // p=p+1;//point 2 element of address than array to show subpart of array  using pointer p
    // cout<<"Before : "<<p<<endl;
}