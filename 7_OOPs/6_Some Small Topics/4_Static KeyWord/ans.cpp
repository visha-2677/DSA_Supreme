#include<bits/stdc++.h>
using namespace std;
class abc{
    public:
    // int x,y;
    static int x,y;
    // static key word use than declare abc::x and abc::y
    // because of static variable is going to share memory with all of the objects(instances)
    void print() const
    // static void print() const //static key word use in funcition than function in only static variable can use and print
    {
        // cout<<this->x<<" "<<this->y<<endl;
        cout<<x<<" "<<y<<endl;
    }
};
// because of static variable is going to share memory with all of the objects(instances) than abc ke all objects can shre same memory x and y variable 
int abc::x;
int abc::y;

int main()
{
    // Not static key word use than diffrent object are diffrent variable inistialization using 'this' key word
    // abc obj1={1,2};
    // abc obj2={2,5};
    // obj1.print();
    // obj2.print();

    abc obj1;
    obj1.x=1;
    obj1.y=3;
    obj1.print();
    abc obj2;
    obj2.x=33;
    obj2.y=34;
    obj2.print();
    obj1.print();

    return 0;
}