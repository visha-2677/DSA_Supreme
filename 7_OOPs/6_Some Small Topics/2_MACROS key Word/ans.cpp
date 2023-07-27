#include<bits/stdc++.h>
#define PI 3.1323424
// ternary oprator
#define MAXX(x,y) (x>y ? x:Y)
using namespace std;

float CircularArea(int r){
    return PI*r*r;
}
float CircularParemeter(int r){
    return 2*PI*r;
}
void fun(){
    int x=4;
    int y=23;
    int c=MAXX(x,y);
}
int main()
{
    float r=24.2;
    cout<<CircularArea(r)<<endl;
    cout<<CircularParemeter(r)<<endl;

    return 0;
}