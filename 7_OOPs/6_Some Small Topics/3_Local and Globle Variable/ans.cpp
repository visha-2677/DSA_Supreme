#include<bits/stdc++.h>
using namespace std;
int x=2;//GLOBLE VARIABLE
int main()
{
    ::x=23;
    int x=20;//LOCAL VARIABLE for main() function
    {
        int x=45;//LOCAL VARIABLE for curliy bresess 
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    return 0;
}