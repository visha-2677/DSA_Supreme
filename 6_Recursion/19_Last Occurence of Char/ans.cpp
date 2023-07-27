#include<bits/stdc++.h>
#include<string.h>
using namespace std;
// int LastOccurenceofChar(string str,char ch){
//     // int index=-1;
//     for(int i=str.length()-1;i>=0;i--){
//         if(str[i]==ch){
//             // index=i;
//             return i;
//         }
//     }
//     // return index;
// }
// tc : O(n)
// sc : O(n)
int LastOccurenofChar(string& str,int ch,int e){
    if(e>=0) {
        if(str[e]==ch){
            return e;
        }
        LastOccurenofChar(str,ch,e-1);
    }
}
int main()
{
    // Inbuilt function of c++
    // char s[]="abbcd";
    // char ch='b';
    // return of pointer of point string to last occurence of char in string
    // char* ptr=strrchr(s,ch);
    // // cout<<"Pointing First string addresh :"<<s<<endl;
    // // cout<<"Pointing to last Occurence of char in string addresh"<<ptr<<endl;
    // cout<<ptr-s<<endl;

    string s="abbcd";
    int e=s.length()-1;
    cout<<LastOccurenofChar(s,'b',e);
    return 0;
}