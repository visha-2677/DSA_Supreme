#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int a;
    public:
    A(int val):a(val){};
    void setfun(int _val){
        a=_val;
    }
    int getfun() const {
        return a;
    }
    friend class B;
    friend void print(const A &x);
};

class B{
    public:
    void print(const A &x){
        // cout<<x.getfun()<<endl;
        // cout<<x.a<<endl;//error because of private member of A class
        cout<<x.a<<endl;//use friend class B in class A than not genrate error 
    }
};

void print(const A &x){
    cout<<x.a<<endl;
}
int main()
{
    A a(19);
    B b;
    b.print(a);
    print(a);
    return 0;
}