#include<bits/stdc++.h>
using namespace std;
// Yes Bana sakte hai
class Box{
    int width;
    Box(int val):width(val){};
    public:
    void setwidth(int _val){
        width=_val;
    }
    int getwidth() const {
        return width;
    }
    friend class Boxfactory;
};
class Boxfactory
{
    int count;
public:
    Box getABox(int _w){
        ++count;
        return Box(_w);
    }
};
int main()
{
    Boxfactory bfac;
    Box b=bfac.getABox(5);
    cout<< b.getwidth()<<endl;
    // Other use in Advanced topic => Singleton class
    // Resource for Constructor : https://learn.microsoft.com/en-us/cpp/cpp/constructors-cpp?view=msvc-170
    return 0;
}