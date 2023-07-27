#include<bits/stdc++.h>
using namespace std;
// void reverseString(string& str){
//     int s=0;
//     int e=str.length()-1;
//     while(s<e){
//         swap(str[s++],str[e--]);
//     }
// }
// tc : O(n)
// sc : O(n)
void reverseString(string& str,int s,int e){
    if(s>=e) return ;
    swap(str[s],str[e]);
    reverseString(str,s+1,e-1);
}

int main()
{
    string str="abcd";
    int s=0;
    int e=str.length()-1;
    reverseString(str,s,e);
    cout<<str;
    return 0;
}