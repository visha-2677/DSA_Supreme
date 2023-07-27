#include<bits/stdc++.h>
using namespace std;
class abc{
    // mutable int x;//than use like non const varible mean re-assign variable use for debbuging purpuce
    int x;
    int *y;
    int z;
    // const int z;//user for diffrence between initialization list and Old style  consturctor 
public:
// ctor : Old style
// _z=0 is default 
    // abc(int _x,int _y,int _z=0){
    //     x=_x;
    //     y=new int(_y);
    //     // const z than not initialization the z 
    //     z=_z;
    // }
// initialization  list :new style
// const z than initialization of z variable 
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){
        *y=*y * 10;
        // Not re-initializtion because of z because of z is const
        // z=10;
    }
    int getx() const
    {
        // x=10;//can not re-assign 
        return x;
    }
    void setx(int _val)
    {
        x=_val;
    }
    int gety() const
    {
        // int f=10;
        // y=&f;//can not re-assign 
        return *y;
    }
    void sety(int _val)
    {
        *y=_val;
    }
    int getz() const 
    {
        return z;
    }
};
void printABC(const abc &a){
    // all call function are const function than printABC function run because of abc &a a object are constant 
    // a.setx();//genrate error because not const funciton
    cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
}
int main()
{
    // 1.const key word with variable
    // const int x=4;//x is constant
    // ->initialization can be done
    // ->But we can't re-asign 
    // x=10;
    // ->Old style to re-asign const variable but current not work new method to work
    // int *p=&x;
    // *p=19;
    // cout<<x<<endl;

    // 2.const key word with pointer
    // //->CONST data,NON-CONST pointer , mean constan only data *a can not re-asign and Non constant mean pointer can re-aisgn
    // const int *a=new int(10); 
    // // int const *a=new int(10); //2nd syntax to write same as line 17 number
    // // *a=12;//data can not re-asign than compilation error
    // cout<<*a<<endl;
    // // delete a;//not use than Memmoy Leak Problem
    // int b=3;
    // a=&b;//pointer can re-asign 
    // cout<< *a <<endl;


    //->CONST pointer,NON-CONST data , mean constan only pointer can not re-asign and Non constant mean data can re-aisgn *a
    // int *const a=new int(10); 
    // *a=12;//data can  re-asign 
    // cout<<*a<<endl;
    // // delete a;//not use than Memmoy Leak Problem
    // int b=3;
    // // a=&b;//pointer can not  re-asign 
    // cout<< *a <<endl;

    //->CONST pointer,CONST data , mean constan only pointer can not re-asign and  constant mean data can not re-aisgn *a
    // const int *const a=new int(10); 
    // // *a=12;//data can not re-asign 
    // cout<<*a<<endl;
    // // delete a;//not use than Memmoy Leak Problem
    // int b=3;
    // // a=&b;//pointer can not  re-asign 
    // cout<< *a <<endl;

    // 3.const key word with class
    abc a(2,3);
    // cout<<a.getx()<<endl;
    // cout<<a.gety()<<endl;
    printABC(a);



    return 0;
}