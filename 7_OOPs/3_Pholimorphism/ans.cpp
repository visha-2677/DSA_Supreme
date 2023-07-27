#include<bits/stdc++.h>
using namespace std;
// *********************************Pholimorphism*******************************************
// Pholimorphism= Particular Entity are multiple form me ya diffrent form me exist kar sakti hai mean Ex of Animal can speak. Diffrent type of Animal are diffrent type of speak
// Two type Pholimorphism
// (1).Compile time pholimorphism
// (2).Run time pholimorphism


// (1).Compile time pholimorphism
// ->Compile time me Overloading Hoti hai.
// Two type of Compile time pholimorphism
//   1.Function Overloding
//   2.Oprator Overloding

// 1.Function Overloding
// Use for same name function can run in program then error genrate than use Function Overloding to handle
class FunctionOverloding{
    public :
    int sum(int a,int b){
        cout<<"First fun run"<<endl;
        return a+b;
    }
    int sum(int a,int b,int c){
        cout<<"second fun run"<<endl;
        return a+b+c;
    }
    int sum(int a,float b){
        cout<<"Third fun run"<<endl;
        return a+b+100;
    }
};
// 2.Operator Overloding
// Ex:1
class OperaterOverloding{
    public:
    int val;
    void operator+(OperaterOverloding& obj2){
        int valu1 = this->val;
        int valu2 = obj2.val;
        cout<<(valu2-valu1)<<endl;
    }
};
// Ex:2
class print{
    int val;
    public :
    print(int val){
        this->val=val;
    }
    friend ostream &operator<<(ostream &output,print& obj){
        output<<obj.val<<endl;
        return output;
    }
};

// (2).Run time pholimorphism
// ->Run time pe Overriding Hoti Hai.
//  1.Function Overriding
class Animal{
    public:
    Animal(){
        cout<<"Animal Constructor Call"<<endl;
    }
    void speak(){
    // virtual void speak(){
        cout<<"Speaking..."<<endl;
    }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"Dog Constructor Call"<<endl;
    }
    // Overriding
    void speak(){
        cout<<"Barking..."<<endl;
    }
};



int main()
{
// (1).Compile time pholimorphism
    // 1.Function Overloding
    // FunctionOverloding a;
    // a.sum(2,3);
    // a.sum(2,3,4);
    // a.sum(2,3.45f);

    // 2.Operator Overloding
    // Ex.1
    // OperaterOverloding obj1,obj2;
    // obj1.val=5;
    // obj2.val=3;
    // this should print diffrence using Operator Overloading
    // obj1+obj2;
    // Ex.2
    // print obj(32);
    // cout<<obj;

// (2).Run time pholimorphism
    // 1.Function Overriding
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    // =>Compile time and Run time Pholimorphism Diffrence through Dynamic allocation
    // =>Simple alloction 
    // Animal* a= new Animal();
    // a->speak();
    // Dog* d=new Dog();
    // d->speak();

    // =>Diffrent alloction 
    // *Up Casting
    // ->Not use 'virtual' KeyWord in Animal function speak than run "Animal" function speak
    // ->use 'virtual' Key Word in Animal function speak than run "Dog" function speak

    // Animal* b=new Dog();
    // b->speak();

    // *Down Casting
    // ->Not use 'virtual' KeyWord in Animal function speak than run "Dog" function speak
    // ->use 'virtual' KeyWord in Animal function speak than run "Animal" function speak

    // Dog* c=(Dog*)new Animal();
    // c->speak();

    // ->Simple Not use 'virtual' Key word than = left side of Refrence Object function run  (left side Ref Object= Animal* b)
    // ->Simple use 'virtual' Key word than = Right side of  Object function run  (Right side Object fucntion= new Dog();)
    //->Most of Case me Up Casting Use Hoti hai 
    //-> Down Casting kam use hoti hai

    // ->Finding which Constructor can run?
    //-> Thrugh Inheritence logic call constructor
    // Animal and Dog dono ki Constructor call hogi kyuki Right side Object function dog is child class of Animal Perent class
    Animal* a=new Dog();
    // Only Animal class constructor call because of Right side objrct function Animal is Perent class 
    Dog* d=(Dog*)new Animal();






    return 0;

    

}