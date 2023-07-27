#include<iostream>
using namespace std;
void update(int **p1){
    // p1=p1+1;
    //change hoga ?? - NO

    // *p1=*p1+1;
    //change hoga ?? -YES(change p)

    **p1=**p1+1;
    //change hoga ?? - YES(chage i)

}
//15 prob
void update(int *p){
    *p = (*p) * 10;
}
//18 prob
void increment(int **p){
    ++(**p);
}
int main(){
    // int i=5;
    // int* p=&i;
    // int** p1=&p;

// i=5 valu can print 3 ways in double pointer
    // cout<< i <<endl;
    // cout<< *p <<endl;
    // cout<< **p1 <<endl;

//p ke andar i ka address print karne ke 3 ways in double pointer
    // cout<< &i <<endl;
    // cout<< p <<endl;
    // cout<< *p1 <<endl;

//p1 ke andar p ka address print karne ke 2 ways in double pointer
    // cout<< &p <<endl;
    // cout<< p1 <<endl;

    // cout<<endl<<endl;
    // cout<<"Before "<<endl;
    // cout<<i<<endl;
    // cout<<p<<endl;
    // cout<<p1<<endl<<endl;
    // update(p1);
    // cout<<"After "<<endl;
    // cout<<i<<endl;
    // cout<<p<<endl;
    // cout<<p1<<endl;
    // cout<<endl<<endl;


//1 problem
    // int first=10;
    // int second=12;
    // int *p=&second;
    // *p=3;
    // cout<<first<<second<<endl;

//2 prob
    // int first=7;
    // int *p=&first;
    // int *q=p;
    // (*q)++;
    // cout<<first<<endl;

//3 prob
    // int first=3;
    // int *p=&first;
    // cout<<(*p)++<<endl;
    // cout<<first<<endl;

//4 prob
    // int *p=0;
    // int first=110;
    // // *p=first;
    // p=&first;
    // cout<<*p<<endl;

//5 prob
    // int first=8;
    // int second=11;
    // int *third=&second;
    // first=*third;
    // *third=*third+2;
    // cout<<first<<" "<<second<<endl;

//6 prob
    // float f=12.5;
    // float p=21.5;
    // float *ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<" "<<f<<" "<<p<<" "<<endl;

//7 prob
    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

//8 prob
    // int arr[4]={1,2,3,4};
    // cout<<*(arr)<<" "<<*(arr+1)<<endl;
    // cout<<arr<<" "<<&arr<<endl;
    // cout<<(arr+1)<<endl;

//9 prob
    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // cout<<p[2]<<endl;
    // cout<<*(arr)<<" "<<*(arr+3)<<endl;

//10 prob
    // int arr[4]={5,2,3,4};
    // int *ptr=arr++; //Not arr address loacation can change
    // cout<<*ptr<<endl;

//11 prob
    // char ch='a';
    // char *p=&ch;
    // ch++;
    // cout<<*p<<endl;

//12 prob
    // char a[5]="abcd";
    // char *p=&a[0];
    // cout<<p<<endl;

//13 prob
    // char a[5]="abcd";
    // char *p=&a[0];
    // p++; 
    // cout<<p<<endl;

//14 prob
    // char a[5]="abcd";
    // char *p=a;
    // cout<<p[0]<<" "<<a[0];

//15 prob
    // int i=10;
    // update(&i);
    // cout<<i<<endl;

//16 prob
    // int first=110;
    // int *p=&first;
    // int **q=&p;
    // int second=(**q)++ + 9;
    // cout<<first<<" "<<second<<endl;

//17 prob
    // int first=100;
    // int *p=&first;
    // int **q=&p;
    // int second=++(**q);
    // int *r=*q;
    // ++(*r);
    // cout<<first<<" "<<second<<endl;

//18 prob
    // int num=110;
    // int *p=&num;
    // increment(&p);
    // cout<<num<<endl;

}