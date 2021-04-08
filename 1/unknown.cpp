#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
int a,c[100];
long int b;
for(int j=3;j<=3;j++){
c[0]=j;
for(int i=1;c[i-1]!=1;i++){
if(c[i-1]%2==0){
b=c[i]==floor(sqrt(c[i-1]));
cout<<b<<"  ";
}
else{

b=c[i]==(sqrt(c[i-1]));
b=c[i]=floor(pow(c[i],3));

cout<<c[i]<<"  ";
}
}
cout<<endl;
}}
