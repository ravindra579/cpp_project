#include<iostream>
using namespace std;
int holes(int a){
int b,c=0;
for(int i=0;a>0;i++){
b=a%10;
if(b==0|b==4|b==6|b==9)
        c++;
    if(b==8)
        c=c+2;
        a=a/10;
    }
    return c;
}
int main(){
int n;
cout<<"enter number";
cin>>n;
    int b,a=0;
    
for(int i=n;i>0;i--){
        b=holes(i);
        a=a+b;
}
    cout<<a;
    }