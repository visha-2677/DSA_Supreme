#include<bits/stdc++.h>
using namespace std;
int Length(char arr[]){
    int length=0;
    for(int i=0;arr[i]!='\0';i++){
        length++;
    }
    return length;
}
int main()
{
    // *char array
    // without for loop use to input of character Array
    // character array me last element '/0' null character hota hai jiski ASCII vlau '0' zero hai
    // char arr[100];
    // cin>>arr;
    // cout<<"apka name : "<<arr<<endl;
    // *string
    // string arr;
    // cin>>arr;
    // cout<<arr;

    // *char array
    // With for loop use like
    // char ch[100];
    // for(char i=0;i<10; i++){
    //     cin>>ch[i];
    // }
    // cout<<"apka name: "<<ch;
    // *string 
    // string arr;
    // cin>>arr;
    // cout<<arr;
    

    // enter input than can initialize '/0' null character in input than use this key word
    // space " "
    // tab "\t"
    // Enter "\n"
    
    // *char array
    // Use this function of getline() than avoid key word and print exact output like
    // char charcter[100];
    // // cin>>ch1;
    // cin.getline(charcter,20);
    // cout<<charcter;
    // *string 
    // string str;
    // getline(cin,str);
    // cout<<str;

    // *char array
    // // cout<<"length is : "<<getLength(charcter);//not work this compiler
    // cout<<"length is : "<<strlen(charcter)<<endl;
    // cout<<"length is : "<<Length(charcter);
    // -->string functions

    // *string length
    // string s;
    // getline(cin,s);
    // // cout<<"length fun : "<<str.length();

    // *Empty
    // cout<<"is Empty :"<<s.empty()<<endl;
    // s.push_back('a');//push element
    // // cout<<s<<endl;
    // s.pop_back();//remove element
    // cout<<s<<endl;
    // cout<<"Print Sub String :"<<s.substr(0,3);

    // *compare two string
    // **comapre diffrent length of string
    // string a="vishal";
    // string b="vi";
    // if(a.compare(b)){
    //     cout<<"a is not b string"<<endl;
    // }
    // else{
    //     cout<<"a is b string"<<endl;
    // }
    // **compare same length of string but character is change
    // string a="art";
    // string b="acr";
    // cout<<a.compare(b);//-1 change string a="cbcd"; than +1

    // *Find str index
    // string sentence="Hello ji kese ho sab";
    // string target="jklf";
    // cout<<sentence.find(target);
    // if(sentence.find(target)==string::npos){
    //     cout<<"Not Fond"<<endl;
    // }

    // *Replace string
    // string str="This my First Massage";
    // string name="vishal";
    // // str.replace(0,4,name);
    // // cout<<str;
    // str.replace(8,5,"Second");
    // cout<<str;

    // *Erase Elment in string
    // string str="vishal is good";
    // str.erase(0,5);
    // cout<<str;
    
    // *string to integer convert fun of stoi
    // string s="123";
    // cout<<stoi(s)+2;

// '\0' null  character is not accesible }through code in print to view in string and char array
    // *char array
    // char ch[4];
    // ch[0]='b';
    // ch[1]='\0';
    // ch[2]='v';
    // ch[3]='i';
    // cout<<ch;
    // // *string
    // string str;
    // str[0]='b';
    // str[1]='\0';
    // str[2]='v';
    // str[3]='i';
    // cout<<str;
    
    
    return 0;   
}