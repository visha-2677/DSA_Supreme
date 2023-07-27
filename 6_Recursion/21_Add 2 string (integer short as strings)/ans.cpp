#include<bits/stdc++.h>
using namespace std;

// *****Array type Solve Problem**************
// void Print_Vector(vector<int> a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }
// vector<int> Reverce(vector<int> a){
//     int s=0;
//     int e=a.size()-1;
//     while(s<=e){
//         swap(a[s++],a[e--]);
//     }
//     return a;
// }
// vector<int> Sum_Of_Two_Array(vector<int> a,int n,vector<int> b,int m){
//     vector<int> ans;
//     int i=n-1;
//     int j=m-1;
//     int carry=0;
//     while(i>=0 && j>=0){
//         int val1=a[i];
//         int val2=b[j];
//         int sum=val1+val2+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }

//     //First case
//     //1 2 3 
//     //    4
//     //-------
//     //1 2 7
//     while(i>=0){
//         int sum=a[i]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         i--;
//     }

//     //Second case
//     //     4
//     // 1 2 3
//     //-------
//     // 1 2 7
//     while(j>=0){
//         int sum=b[j]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         j--;
//     }

//     //Second case
//     //  9 1 1
//     //  1 2 3
//     //-------
//     //1 0 3 4
//     while(carry!=0){
//         int sum=carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//     }
//     return Reverce(ans);
// }


// ***********Reqursive But string type Solve Problem*************
// link : https://leetcode.com/problems/add-strings/
// tc : O(n)
// sc : O(n)
void ReqrsiveAddTwoString(string& s1,int p1,string&s2,int p2,int carry,string& ans){
    // Base case
    if(p1<0 && p2<0){
        // carry can genrate in sum of s1[p1] and s2[p2] some case like
        // case 1:
        //  9 1 1
        //  1 2 3
        //-------
        //1 0 3 4
        // 1 is carry
        if(carry!=0){
            // carry can push in ans
            // carry can intiger to string than carry+'0';
            ans.push_back(carry+'0');
        }
        return ;
    }


    // ek case solve 
    // n1 and n2 is element of s1 and s2
    // why (p1 >=0 ? s1[p1] : '0') ? because of kuch case me '0' add karna padega like
    // case 1: 
        //1 2 3 
        //0 0 4
        //-------
        //1 2 7
    // case 2:
       // 0 0 4
       // 1 2 3
       //-------
       // 1 2 7
    // Why -'0' ? conver string to integer 
    int n1 = (p1 >=0 ? s1[p1] : '0') - '0';
    int n2 = (p2 >=0 ? s2[p2] : '0') - '0';
    int csum=n1 + n2 + carry;
    int digitsum = csum % 10;//genrate digitsum not carry add in digitsum
    carry=csum/10;//genrate carry 
    // why +'0' ? intiger to string 
    ans.push_back(digitsum+'0');

    // RE = Recursive call
    ReqrsiveAddTwoString(s1,p1-1,s2,p2-1,carry,ans);
}

string addString(string s1,string s2){
    string ans="";
    int p1=s1.length()-1;
    int p2=s2.length()-1;
    int carry=0;
    ReqrsiveAddTwoString(s1,p1,s2,p2,carry,ans);
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){

    // *****Array type Solve Problem**************
    // vector<int> a={9,1,1};
    // Print_Vector(a);

    // cout<<endl;

    // vector<int> b={1,2,3};
    // Print_Vector(b);
    // cout<<endl;
    // cout<<"--------"<<endl;
    // vector<int> ans=Sum_Of_Two_Array(a,3,b,3);
    // Print_Vector(ans);

    // ********Reqursive But string type Solve Problem*************
    string s1="911";
    string s2="123";
    cout<<addString(s1,s2);
}