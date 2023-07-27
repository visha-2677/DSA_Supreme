#if !defined(BIRD_H)
#include<bits/stdc++.h>
using namespace std;

#define BIRD_H

// Interface :Bird Class
class Bird{
public:
    // pure virtual function
    virtual void eat()=0;
    virtual void fly()=0;
    // classes that inherits this class
    // has implement pure virtual function
};
// Implementation : sparrow and Eagle class in inherited (implemented) By Bird class interface
class sparrow:public Bird{
    private:
    void eat(){
        cout<<"Sparrow is eating.."<<endl;
    }
    void fly(){
        cout<<"Sparrow is flying.."<<endl;
    }
};
class Eagle:public Bird{
    private:
    void eat(){
        cout<<"Eagle is faster eating.."<<endl;
    }
    void fly(){
        cout<<"Eagle is faster flying.."<<endl;
    }
};


#endif // BIRD_H
