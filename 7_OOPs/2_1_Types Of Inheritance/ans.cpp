#include<bits/stdc++.h>
using namespace std;
// **********************************Types of Inheritence*************************************************
// 1. Siglelevel Inheritence
// Animal = Perent Class
// Dog    = Child Class
// Ex:
        // Animal (Perent Class)
        //   ^
        //   |
        //  Dog   (Child Class)
// class Animal{
//     int age;
//     string name;
// };
// class Dog:public Animal{
//     void set(){
//         cout<<this->age;
//     }
// };
// 2. Multilevel Inheritence
// Fruit = Perent Class
// Mango , Apple = Child Class
// Ex:
        // Fruit (Perent Class)
        //   ^
        //   |
        //  Mango   (Child Class)
        //   ^
        //   |
        //  Apple   (Child Class)
// class Fruit{
//     string name;
// };
// class Mango:public Fruit{
//     void name(){
//         cout<<this->name;
//     }
// };
// class Apple:public Fruit{
//     void name(){
//         cout<<this->name;
//     }
// };
// 3. Multiple Inheritence
// Tiger,Lion = Perent Class
// Liger = Child Class
// Ex:
        // Tiger (Perent Class)         Lion (Perent Class)
        //   ^                                ^
        //   |________________________________|
        //                   |
        //             Liger   (Child Class)
// class Tiger{
//     public :
//     string name;
//     float speed;
//     Tiger(){
//         speed=23;
//     }
// };
// class Lion{
//     public:
//     int age;
//     float speed;
//     Lion(){
//         speed=15;
//     }
// };
// class Liger:public Tiger,public Lion{
//     public:
//     int leg;
// };
// 4.Heirarchical Inheritence
// Car = Perent Class
// Scorpio,Fortuner = Child Class
// Ex:
       
        //                   
        //                Car (Child Class)
        //                  ^
        //                  |
        //   __________________________________
        //   |                                |
        // Scorpio (Perent Class)         Fortuner (Perent Class)
class Car{
        public:
        void speed(){
                cout<<"Speed Up...";
        }
};
class Scorpio:public Car{
        public:
        string name;
};
class Fortuner:public Car{
        public:
};
// 5.Hibrid Inheritance : all are Mix
        
int main()
{
    // 3. Multiple Inheritence
    // for two same name variable in two parent class than particular parent class variable excess in child class and main function than use scop resoluation Oprater(::) use
//     Liger a;
//     cout<<a.Tiger::speed<<endl;
//     cout<<a.Lion::speed<<endl;

    // 4.Heirarchical Inheritence
//     Scorpio p;
//     p.speed();
//     Fortuner f;
//     f.speed();



    return 0;
}