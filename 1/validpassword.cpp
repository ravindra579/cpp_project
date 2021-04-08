 #include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
 char a[25];
cout<<"enter string ";
cin>>a;
int x=0;
if(5<strlen(a)<25)
x++;
for(int i=0;i<strlen(a);i++){
if(isupper(a[i])){
x++;
break;}
}
for(int i=0;i<strlen(a);i++){
if(islower(a[i])){
x++;
break;}
}
for(int i=0;i<strlen(a);i++){
if(isdigit(a[i])){
x++;
break;
}}
for(int i=0;i<strlen(a);i++){
if(a[i]=='#'||a[i]==','||a[i]=='.'||a[i]=='*'||a[i]=='&'||a[i]=='@'||a[i]==':'||a[i]=='!'||a[i]=='?'){
x++;
break;
}}
    for(int i=0;i<strlen(a);i++){
        if(a[i]==a[i+1]==a[i+3]){
            x--;
    break;
        }
    }
if(x==5)
    cout<<"valid password";
else
    cout<<"invalid password";
cout<<a[0];
}