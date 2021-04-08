#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
char func(char c,int b){
int a=c;
    char x;
    x=c;
if(64<a<92||96<a<123){
a=a+b;
x=a;
 
}
    return x;
}
int main(){
char a[10];
int k;
cout<<"enter k"<<endl;
    cin>>k;
cout<<"enter string";
    cin>>a;
    char b;
    for(int i=0;i<strlen(a);i++)
        {
        b=a[i];
       b=func(b,k);
        a[i]=b;
    
}
    cout<<a;
}

