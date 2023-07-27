#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
// void update(int *p){
void update(int p){
    p=p+1;
    // cout<<p<<endl;
    // *p=*p+1;
}
// int getSumArray(int a[],int n){  //pointer hi Point kar raha hai
int getSumArray(int *a,int n){      //pointer hi Point kar raha hai
    cout<<endl<<"Size of Pointer NOt Array Becouse Refer pointer"<<endl;
    cout<<"Size :"<<sizeof(a)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        // sum+=i[a]; ///Becouse of a[i]=*(a+i)
    }
    return sum;
}
int main(){ 
    int a=5;
    int *p=&a;
    // print(&*p);//call ma pointer p nu address apvanu avij rite array ma thtu tu
    // print(&a);//call ma pointer p nu address apvanu avij rite array ma thtu tu
    // print(p);
    //same valu print of a
    // cout<<"Before update : "<<p<<endl;
    // update(p);
    // update(&a);
    // cout<<"after update : "<<p<<endl;//Not chang Becouse of Function Update P change NOt main function 
    
    cout<<"Before update : "<<*p<<endl;
    update(*p);
    // update(p);
    cout<<"after update : "<<*p<<endl; //Becoude of main function call update *p mean point a=5 than increment pass By valu

    // int a[5]={1,2,3,4,5};
    // // cout<<"sum : "<<getSumArray(a,5); 
    // cout<<"sum : "<<getSumArray(a+3,2); //use of Pointer increment and size can change
}