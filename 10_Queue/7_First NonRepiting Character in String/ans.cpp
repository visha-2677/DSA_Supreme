#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    string ans="";
    queue<char> q;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        char  ch=str[i];
        // Freqency Coont in array
        freq[ch-'a']++;
        // One char push in Queue
        q.push(ch);
        // For check One Char To check this char is nonRepiting or not
        while(!q.empty()){
            if(freq[q.front() - 'a'] > 1){
                // Char is Repited than pop in Queue
                q.pop();
            }
            else{
                // Char is Not Repited than push in ans
                ans.push_back(q.front());
                break;
            }
        }
        // Q is Empty than Push # char
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    
    string str = "aabc";
    cout << " Final ans is: " << solve(str ) << endl;
    return 0;
}