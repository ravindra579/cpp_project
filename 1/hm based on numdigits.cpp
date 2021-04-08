#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"enter number";
cin>>n;
int a,b,sum=0;
a=n;
for(int i=0;n>0;i++){
b=n%10;
sum=sum+b;
n=n/10;
}
int c;
c=sum;
int d=0;
for(int i=2;i<c/2;i++){
if(c%i==0){
d++;
break;
}

}
if(a%sum==0){
if(d==1)
cout<<"M";
else
cout<<"H";}}