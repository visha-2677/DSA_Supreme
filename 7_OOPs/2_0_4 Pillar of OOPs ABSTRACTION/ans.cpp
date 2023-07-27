#include<bits/stdc++.h>
using namespace std;
//********************************************* 1.Encapsulation (Use for Data Hiding,Security)******************************************
// // Encapsulation is Data Hiding mean Capsul through rape up the DataMemmber(DM) and MemmberFunction(MF)
// // class is Abstraction => Class can rape up the DataMemmber(DM) and MemmberFunction(MF)
// // code can Reusable 
// class Animal{
//     public:
//     // DM
//         int age;
//         int weight;
//     // MF
//         void eat(){
//             cout<<"Eating"<<endl;
//         }
// };
// // *Perfect Encapsulation
// // All DataMemmber(DM) is private mean only Exccess by getter(getAge) and setter(setAge) function 
// // Only Read Only bana sakte hai
// // code can Reusable 
// class perfect{
//     // DM
//     private:
//         int age;
//         int weight;
//     // MF
//     public:
//         void eat(){
//             cout<<"Eating"<<endl;
//         }
//         // getter
//         int getAge(){
//             return this->age;
//         }
//         // setter
//         void  setAge(int age){
//             this->age=age;
//         }
// };


// *********************************************2.Inheritance***********************************************************************
// Why use of Inheritance ?
// Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.

//                                       Base class/Super class/Parent class <---
//                                                     ^                        | DM and FM Inherit
//                                                     |                        |
//                                       Sub class/Child class/Dirived class <---

// Syntax : class child:__ Parent 
// "__" <= is Mode of inheritance is called (Public/Private/Protected)

// 1.1. Parent DM and MF is Public and Mode of inheritance is Public
// class Animal{
//     public:
//     int age;
// };
// class Dog:public Animal{
//     public:
//         void print(){
//             cout<<this->age;
//         }
// };
// 1.2. Parent DM and MF is Public and Mode of inheritance is Protected
// class Animal{
//     public:
//     int age;
// };
// class Dog:protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };
// 1.3. Parent DM and MF is Public and Mode of inheritance is private
// class Animal{
//     public:
//         int age;
// };
// class Dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };


// 2.1. Parent DM and MF is Protected and Mode of inheritance is Public
// class Animal{
//     protected:
//     int age;
// };
// class Dog:public Animal{
//     public:
//         void print(){
//             cout<<this->age;
//         }
// };
// 2.2. Parent DM and MF is Protected and Mode of inheritance is Protected
class Animal{
    protected:
    int age;
};
class Dog:protected Animal{
    public:
    void print(){
        cout<<this->age;
    }
};
// 2.3. Parent DM and MF is Protected and Mode of inheritance is private
// class Animal{
//     protected:
//         int age;
// };
// class Dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };


// 3.1. Parent DM and MF is Private and Mode of inheritance is Public
// class Animal{
//     private:
//     int age;
// };
// class Dog:public Animal{
//     public:
//         void print(){
//             cout<<this->age;
//         }
// };
// 3.2. Parent DM and MF is Private and Mode of inheritance is Protected
// class Animal{
//     private:
//     int age;
// };
// class Dog:protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };
// 3.3. Parent DM and MF is Private and Mode of inheritance is private
// class Animal{
//     private:
//         int age;
// };
// class Dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };


int main()
{

// *********************************************2.Inheritance***********************************************************************
// 1.1. Parent DM and MF is Public and Mode of inheritance is Public
    // Dog d;
    // Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();
// 1.2. Parent DM and MF is Public and Mode of inheritance is Protected
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();
// 1.3. Parent DM and MF is Public and Mode of inheritance is Private
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();


// 2.1. Parent DM and MF is Protected and Mode of inheritance is Public
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();
// 2.2. Parent DM and MF is Protected and Mode of inheritance is Protected
     Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();
// 2.3. Parent DM and MF is Protected and Mode of inheritance is Private
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    //  Accessible in child class
    // d.print();


// 3.1. Parent DM and MF is Private and Mode of inheritance is Public
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    // Not Accessible in child class
    // d.print();
// 3.2. Parent DM and MF is Private and Mode of inheritance is Protected
    //  Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    // Not Accessible in child class
    // d.print();
// 3.3. Parent DM and MF is Private and Mode of inheritance is Private
    // Dog d;
    // Not Accessible in main function
    // cout<<d.age;
    // Not Accessible in child class
    // d.print();



    return 0;
}