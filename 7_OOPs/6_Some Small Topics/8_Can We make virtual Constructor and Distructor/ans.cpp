#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    // virtual Base(){//can creat virtual constructor
    Base(){
        cout<<"Ctor of Base"<<endl;
    }
    virtual ~Base(){//creat virtual distructor to call Derived Distructor 
        cout<<"Dtor of Base"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Ctor of Derived"<<endl;
    }
    ~Derived(){
        cout<<"Dtor of Derived"<<endl;
    }
};
int main()
{
    Base *b=new Derived();
    delete b;//not call Derive Dtor than use virtual key word in Base distructor than call Derived Destructor
    return 0;
}