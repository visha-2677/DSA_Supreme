#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"p1"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    cout<<"p2"<<endl;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
    cout<<"p3"<<endl;
        for(int i=0;i<3;i++){
            if(i==0 || i==2){
                for(int j=0;j<5;j++){
                    cout<<"* ";
                }       
            }
            else{
                cout<<"* ";
                for(int j=0;j<3;j++){
                    cout<<"  ";
                }
                cout<<"* ";
            }
            cout<<endl;
        }
    cout<<"p3_1"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(i==0 || j==0 || j==(4) || i==(4)){
                cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<"p4"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<i+1;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    cout<<"p5"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                cout<<"* ";
            }
            cout<<endl;
    }
    cout<<"p6"<<endl;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
    }
    cout<<"p7"<<endl;
        for(int i=0;i<5;i++){
            for(int j=1;j<=5-i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
    }
    cout<<"p8"<<endl;
        for(int i=1;i<=5;i++){
            for(int k=1;k<=5-i;k++){
                    cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
    }
    cout<<"p8_1"<<endl;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i;j++){
                cout<<"  ";
            }
            for(int k=1;k<=(2*i)-1;k++){
                cout<<" *";
            }
            cout<<endl;
        }
        //extra logic 3rd logic
    cout<<"p8_1"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<"  ";
            }
            for(int k=0;k<=i;k++){
                cout<<" *";
            }
            for(int l=0;l<i;l++){
                cout<<" *";
            }
            cout<<endl;
        }
    cout<<"p8_2"<<endl;
        for(int i=1;i<=5;i++){
            for(int j=0;j<5-i;j++){
                cout<<"  ";
            }
            for(int k=0;k<(2*i)-1;k++){
                if(k==0 || k==(2*i)-2 || i==5){
                cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<"p9"<<endl;
        for(int i=1;i<=5;i++){
            for(int k=1;k<=i-1;k++){
                    cout<<" ";
            }
            for(int j=1;j<=5-i+1;j++){
                cout<<"* ";
            }
            cout<<endl;
    }
    cout<<"p10"<<endl;
        for(int i=1;i<=5;i++){
            for(int k=1;k<=5-i;k++){
                    cout<<" ";
            }
            int count=i,count1=1;
            while(1){
                if(count1<=i){
                cout<<count;
                    count++;
                    count1++;
                }
                else{
                    break;
                }
            }
        cout<<endl;
    }
    cout<<endl<<"p11"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<" ";
            }
            for(int k=0;k<=i;k++){
                cout<<i+k+1;
            }
            for(int l=0;l<i;l++){
                cout<<i+l+1;
            }
            cout<<endl;
        }
    
    cout<<endl<<"p12"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<" ";
            }
            for(int k=0;k<=i;k++){
                cout<<" *";
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int k=0;k<5-i;k++){
                cout<<" *";
            }
            cout<<endl;
        }
    cout<<endl<<"p13"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<" ";
            }
            for(int k=0;k<=i;k++){
                if(k==0 || k==i || k==4){
                cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int k=0;k<5-i;k++){
                if(k==0 || k==(5-i-1) || k==4){
                cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<endl<<"p14"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                cout<<" *";
            }
            for(int k=0;k<=i;k++){
                if(k==0 || k==i || k==4){
                cout<<"  ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int j=0;j<i;j++){
                cout<<"  ";
            }
            for(int j=0;j<5-i;j++){
                cout<<" *";
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<i+1;j++){
                cout<<" *";
            }
            for(int k=0;k<5-i;k++){
                if(k==0 || k==(5-i-1) || k==4){
                cout<<"  ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int j=0;j<5-i-1;j++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<" *";
            }
            
            cout<<endl;
        }
    cout<<endl<<"p15"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                cout<<" *";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"  ";
            }
            for(int j=0;j<5-i;j++){
                cout<<" *";
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                cout<<" *";
            }
            for(int j=0;j<(2*5)-(2*i)-1;j++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<" *";
            }
            cout<<endl;
        }
    cout<<endl<<"p16"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                cout<<i+1;
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<5-i-1;
            }
            cout<<endl;
        }
    cout<<endl<<"p17"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                cout<<i+1;
                if(j!=i){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                cout<<5-i;
                if(j!=(5-i-1)){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    cout<<endl<<"p18"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                int ans=j;
                char ch=ans+'A';
                cout<<ch;
            }
            for(int j=i;j>=1;j--){
                int ans=j-1;
                char ch=ans+'A';
                cout<<ch;
            }
            cout<<endl;
        }
    cout<<endl<<"p19"<<endl;
        for(int i=0;i<5;i++){
            for(int  j=0;j<5;j++){
                if(i==0 || j==0 || i==4 || j==4){
                cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<endl<<"p20"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                if(i==0 || j==0 || j==5-i-1 || j==4){
                    cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
                cout<<endl;
        }
    cout<<endl<<"p21"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                if(i==0 || j==0 || j==i || i==4){
                    cout<<" "<<j+1;
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<endl<<"p21"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                if(i==0 || j==0 || j==(4-i) || i==4){
                    cout<<" "<<j+i+1;
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    cout<<endl<<"p22"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i-1;j++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<" "<<1+j;
            }
            for(int j=0;j<i;j++){
                cout<<" "<<i-j;
            }
            cout<<endl;
        }
    cout<<endl<<"p23"<<endl;
    for(int i=0;i<5;i++){          
        for(int j=0;j<=i;j++){      
            cout<<i-j+1;
        }
        cout<<endl;
    }
    cout<<endl<<"p24"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1;
            if(j!=i){
                cout<<"*";
            }
        }
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"p25"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Diya"<<endl;
    int count=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<"Some patterns are panding to comming soon as soon as posible";
    cout<<"(#fancy pattern 1,2,3) and (Floy'd and pascal's triangle) and (Butterfly pattern)";
}