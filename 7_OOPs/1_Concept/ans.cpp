#include<bits/stdc++.h>
using namespace std;
class Animal{
    // Access Modifire
    private:
    int leg;
    public:
    // state
    string name;
    int age;
    float weight;

    // Constructor Use for Object initialization 
    // default Constructer
    // not creat constructer than automatic create constructer and called but not print anything
    Animal(){
        // Object initialization
        this->name="";
        this->age=0;
        this->weight=0;
        cout<<"this constructer is default called"<<endl;
    }
    // Parametrize Constructor
    Animal (int age){
        this->age=age;
        cout<<"Paramitrize Constuctor called"<<endl;
    }
    Animal (int age,int weight){
        this->weight=weight;
        cout<<"2 Paramitrize Constuctor called"<<endl;
    }

    // Copy Constructor
    // why &? because of not use & than Animal obj can pass by valu than copy of obj creat than call every time creat copy than trap in infinit loop than & to use refrence varible than not creat copy
    Animal (Animal& obj){
        this->age = obj.age;
        this->name = obj.name;
        this->weight = obj.weight;
        cout<<"I am inside Copy Constructor"<<endl;
    }
    //  behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Su su ..."<<endl;
    }
    int get(){
        return leg;
    }
    // "this" keyword to same in function parameter and class variable name than use to diffrenciat variable name
    // "this" is pointer to current object

    void set(int leg){
        this->leg=leg;
        // (*this).leg=leg;
    }

    ~Animal(){
        cout<<"I am Destructor to clean Memory of Constructor"<<endl;
    }
};


class Empty{

};

// Deep and shallow copy constructor
class abc{
    public:
    int x;
    int *y;
    abc(int _x,int _y):x(_x),y(new int(_y)){}
// default dumb copy constructor:It is SHALLOW copy
    abc(const abc &obj){
        x=obj.x;
        y=obj.y;
    }
// Our Smart DEEP copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=new int(*obj.y);
    // }
    void print() const
    {
        printf("X:%d\nPTR Y:%p\nContent of Y(*Y):%d\n\n",x,y,*y);
    }
    ~abc(){
        delete y;
    }
};
int main()
{
    // cout<<"Empty Class size: "<<sizeof(Empty)<<endl;
    // // Why size is 32 ? because concept of padding and gredy alignment this resource
    // // https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
    // cout<<"Animal Class size: "<<sizeof(Animal)<<endl;

    // // *******************************************Object Creation***************************************************

                                            // // 1.Static Object creation allocation                                   
    // Animal Dhruv(100);//Parameterize Constructor called
    // Dhruv.name="Lion";
    // Dhruv.age=10;
    // Dhruv.weight=500.5;
    // cout<<"(Object) Dhruv for name(Peroperties): "<<Dhruv.name<<endl;
    // cout<<"(Object) Dhruv for age(Peroperties): "<<Dhruv.age<<endl;
    // cout<<"(Object) Dhruv for Weight(Peroperties): "<<Dhruv.weight<<endl;

    // Dhruv.eat();
    // Dhruv.sleep();

    // cout<<"(Object) Dhruv for leg(Peroperties) not eccess because private: "<<Dhruv.leg<<endl;
    // How to Eccess it ? Use get and set function
    // Dhruv.set(2);
    // cout<<"(Object) Dhruv for leg(Peroperties) Private member Excess:"<<Dhruv.get();


                                            // // 2.Dynamic creation allocation
    // // static in use stack Memorey than use like int,cha,string... other data type in stack Memory to autometic deallocation memory than stack Memory is less size to Heap(Dynamic) Memory
    // // Heap Memory is More size than allocate through address "new int" in Heap Memory than deallocation of Memory not automatic through "delete" keyword to dellocation
    // // Memory Leak
    // // like int
    // // Garbege Collector
    // // int *a=new int;//int *a (addresh store in pointer)= new int (dinamic allocation Heap memory addresh recive(address retturn))
    // // delete a;
    // // like array
    // // int *left=new int[10];//int *left (addresh store in pointer)= new int[10](dinamic allocation  Heap memory addresh recive)
    // // delete[] left;

    // // Animal* suresh=new Animal;
    // // Animal* suresh=new Animal();
    // // Animal* suresh=new Animal(100);//Parameterize Constructor called
    // Animal* suresh=new Animal(100,200);//2 Parameterize Constructor called
    // // why (*suresh)? suresh is pointer than only store the addresh than * to store valu of actual object in veriable of class
    // // (*suresh).name="Hathi";
    // // (*suresh).age=20;
    // // (*suresh).weight=400;
    // // cout<<"(Object) Dhruv for name(Peroperties): "<<(*suresh).name<<endl;
    // // cout<<"(Object) Dhruv for age(Peroperties): "<<(*suresh).age<<endl;
    // // cout<<"(Object) Dhruv for Weight(Peroperties): "<<(*suresh).weight<<endl;
    // // (*suresh).eat();
    // // (*suresh).sleep();

    // // alternetic to store valu of object than use -> (Arrow keyword)
    // suresh->name="Hathi";
    // suresh->age=20;
    // suresh->weight=400;
    // cout<<"(Object) Dhruv for name(Peroperties): "<<suresh->name<<endl;
    // cout<<"(Object) Dhruv for age(Peroperties): "<<suresh->age<<endl;
    // cout<<"(Object) Dhruv for Weight(Peroperties): "<<suresh->weight<<endl;
    // suresh->eat();
    // suresh->sleep();


// ********************************************* Copy Constructor******************************************
    // One object of class varible valu copy to other object of class varible for use copy constructor
    // a object of class in varible valu copy in b object of class in varible 
    // copy Constructor
    // using static copy constructor call
    // Animal a(10);
    // Animal c=a;//type One to call copy constructor
    // Animal b(c);//type two to call copy constructor

    // using Dynamic copy constructor call
    // Animal* b= new Animal(100);
    // Animal a=*b;
    // Animal c(a);

    // why use of copy Constructor?
    // Depp and Shellow copy in use Comming Soon ...
    // abc a(1,2);
    // cout<<"Print a"<<endl;
    // a.print();
    
    // abc b(c);// copy constructor
    // abc b=a;
    // cout<<"Print b"<<endl;
    // b.print();
    // *b.y=34;
    // cout<<"Print b"<<endl;
    // b.print();
    // cout<<"Print a"<<endl;
    // a.print();

    // Use shallow copy use than major problem Ocur
    // show in Online Compiler in malloc: Double free object error 
    // mean delete a than delete memory addresh of *y than same point of b object than b to point *y than print this than re-delete same memory address
    abc *a=new abc(1,2);
    abc b=*a;
    delete a;
    b.print();
    


//*********************************************** Destructor********************************************
// // Destructor is deffernciat by "~" sign
// // Destructor in no paramiter and no return type
// // Creat Constructor than allocation of Memmory
// // than Destructor use for Memory Deallocation (free of Memmory)
// // static Constructor in Automatic Deallocation of Memory but Dynamic in not Automatic Deallocation

// // static Constructor in Auto call to destructor 
//     // Animal a;
//     // a.age=23;

// // Dunamic Constructor not call Auto destructor than use "delete" keyword to call destructor 
//     Animal* a = new Animal();
//     a->age=10;
//     delete a;




    // HW
    // Const keyword se variable  and function kese creat kar sakte hai?
    // static variable and function kese creat kar sakte hai?
    // initialization  list

    return 0;
}