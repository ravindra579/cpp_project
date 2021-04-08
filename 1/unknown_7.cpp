#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"enter number";
cin>>n;
int b,x=0;
int sum;
do{
sum=0;
for(int i=0;n>0;i++){
b=b%10;
sum=sum+b;
n=n/10;
}  n=sum;
x++;}while(sum/10>0);
cout<<x;
}