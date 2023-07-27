#include<bits/stdc++.h>
using namespace std;
int fun4(int x,int *py,int **ppz){
    int y,z;
    **ppz+=1;
    z=**ppz;
    *py +=2;
    y= *py;
    x +=3;
    return x+y+z;
}
int fun3(int z){
    z+=z;
    cout<<z<<" ";
}
int fun2(int *y){
    int x=*y+2;
    fun3(x);
    *y=x-1;
    cout<<x<<" ";
}
int fun1(int *ptr){
    int a=10;
    ptr=&a;
    *ptr=(*ptr) * (*ptr);
}
int main()
{
    // int *ptr=0;
    // int a=10;
    // *ptr=a;
    // cout<<*ptr;
    // Error but not print 

    // char ch='a';
    // char *ptr=&ch;
    // // ch++;
    // // *ptr++;
    // ++*ptr;
    // cout<<*ptr<<endl;

    // int a=7;
    // int *c=&a;
    // c=c+1;
    // cout<<a<<" "<<*c<<" ";

    // int a[]={1,2,3,4};
    // int *p=a++; //because of a array can stor in stack memory than a array address can const than can not change main a array address 
    // cout<<*p<<endl;

    // int arr[]={4,5,6,7};
    // int *ptr=(arr+1);
    // cout<<*arr+9<<endl;
    // cout<<*ptr+9;

    // char b[]="abc";
    // char *c=&b[0];
    // cout<< c<<endl;

    // char b[]="abc";
    // char *c=&b[0];
    // cout<<b[0]<<" "<<c[0]<<endl;

    // char arr[20];
    // int i;
    // for(i=0;i<10;i++){
    //     *(arr+i)=65+i;
    // }
    // *(arr+i)='\0';
    // cout<<arr;

    // char *ptr;
    // char str[]="abcdefg";
    // ptr=str;
    // ptr+=5;
    // cout<<ptr;

    // char st[]="ABCD";
    // for(int i=0;st[i]!='\0';i++){
    //     cout<<st[i]<<" "<<*(st)+i<<" "<<*(st+i)<<" "<<i[st]<<endl;
    // }

    // float arr[5]={12.5,10.0,13.5,90.5,0.5};
    // float *ptr1 =&arr[0];
    // float *ptr2 = ptr1+3;
    // cout<<*ptr2<<" ";
    // cout<<ptr2-ptr1;

    // int a=10;
    // fun1(&a);
    // cout<<a<<endl;

    // int a=10;
    // int *p=&a;
    // int **q=&p;
    // int b=20;
    // *q=&b;
    // (*p)++;
    // cout<<a<<" "<<b<<endl;

    // int x=5;
    // fun2(&x);
    // cout<<x<<" ";

    // int c,*b,**a;
    // c=4;
    // b=&c;
    // a=&b;
    // cout<<fun4(c,b,a);


    

    return 0;
}