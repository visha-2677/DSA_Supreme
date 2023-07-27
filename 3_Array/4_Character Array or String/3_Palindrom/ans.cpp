#include<bits/stdc++.h>
using namespace std;
bool Palindrom(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    string str="NOON";
    cout<<Palindrom(str);
    return 0;
}