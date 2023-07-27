#include<bits/stdc++.h>
using namespace std;
void LowerToUpper(string& str){
    for(int i=0;i<str.length() && str[i]>+'a' && str[j]<='z';i++){
        str[i]=str[i]-'a'+'A';
    }
}
void UpperToLower(string& str){ 
    for(int i=0;i<str.length() && str[i]>+'A' && str[j]<='Z';i++){
        str[i]=str[i]-'A'+'a';
    }
}
int main()
{
    string str="vishal";
    LowerToUpper(str);
    cout<<str<<endl;
    UpperToLower(str);
    cout<<str;
    return 0;
}