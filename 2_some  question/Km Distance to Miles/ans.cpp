#include<bits/stdc++.h>
using namespace std;
double KmtoMiles(double Km){
    double Miles=Km*0.62137119;
    return Miles;
}
int main()
{
    cout<<KmtoMiles(3);
    return 0;
}