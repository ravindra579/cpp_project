#include<iostream>
//int func(int a,int n){
//int b=0;
//for(int i=0;i<n;i++){
//if(a[i]==a){
//b++;
//break;}
//return b;
//}
//}
using namespace std;
int main(){
int n,k,d;
int j=0;
int a[100];
cout<<"enter n,k";
cin>>n>>k;
//for(int i=0;i<n;i++)
//a[i]=i;
int c=0;
do{
j=j+k;
a[c]=j;
c++;
for(int i=0;i<k;i++){
//b=func(j,n);
int b=0;
for(int i=0;i<n;i++){
if(a[i]==j){
b++;
break;}
if(b==1)
j++;
}

}
if(j>n){
d=n-j;
j=0;
for(int i=0;i<d;i++){
//b=func(j,n);
int b=0;
for(int i=0;i<n;i++){
if(a[i]==j){
b++;
break;}
if(b==1)
j++;
}
}
}
}while(c!=n-1);
    cout<<a[n-1];
}
