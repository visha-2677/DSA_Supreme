#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/reverse-vowels-of-a-string/description/
    bool Vowels(char ch){
        ch=tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    string reverseVowels(string str) {
        int s=0;
        int e=str.length()-1;
        while(s<e){
            if(Vowels(str[s]) && Vowels(str[e])){
                cout<<str[s]<<s<<" "<<str[e]<<e<<endl;
                swap(str[s++],str[e--]);
            }
            else if(Vowels(str[s])== 0){
                s++;
            }
            else {
                e--;
            }
        }
        return str;
    }

int main()
{   
    string s="leetcode";
    cout<<reverseVowels(s);
    return 0;
}