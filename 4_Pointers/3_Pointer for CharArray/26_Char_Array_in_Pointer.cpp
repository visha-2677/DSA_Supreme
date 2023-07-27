#include<iostream>
using namespace std;
int main(){
//     int a[5]={1,2,3,4,5};
//     // int *p=&a;       //Generate Error because of pointer in array particualr location eliment can point
//     int *p=&a[0];       
    // int *p=a;

// cha Array Only for
    // char ch[6]="abcde";
    //char *p1=&ch;       //Generate Error because of pointer in char array particualr location character can point
    // char *p1=&ch[0];
    // // char *p1=ch;

    // cout<<"Address of a[0] :"<<a<<endl;
    // cout<<"Full Char of Array content :"<<ch<<endl;//Becouse of Empimentaion Diffrenc  
    // cout<<"Address of a[0] :"<<p<<endl;
    // cout<<"Full Char of Array content :"<<p1<<endl;//Becouse of Empimentaion Diffrenc
    // cout<<"Full Char of Array content :"<<p1+1<<endl;//Becouse of Empimentaion Diffrenc
    // cout<<"Full Char of Array content :"<<p1+3<<endl;//Becouse of Empimentaion Diffrenc

//Only One char not character Array
    char temp='z';
    char *p=&temp;
    cout<<p<<endl;//jub tak NULL char nahi milta tab tak print hoga randome 


    // char ch[6]="abcde";
    // char *c="abcde";//☠️YE kabhi nahi karna kyu ki pointer point ch[0] and increment pointer than point read only memory

}