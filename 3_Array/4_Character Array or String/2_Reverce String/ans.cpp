#include<bits/stdc++.h>
using namespace std;
void ReverceString(string& str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        swap(str[s++],str[e--]);
    }
}
int main()
{
    string str="vishal";
    ReverceString(str);
    cout<<str;
    return 0;
}