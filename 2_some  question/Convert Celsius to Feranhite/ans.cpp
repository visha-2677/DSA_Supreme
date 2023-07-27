#include<bits/stdc++.h>
using namespace std;
double CelsiustoFeranhite(double Celsius){
    double Feranhite=(1.8*Celsius)+32;
    return Feranhite;
}
int main()
{
    cout<<CelsiustoFeranhite(35.327623);
    return 0;
}