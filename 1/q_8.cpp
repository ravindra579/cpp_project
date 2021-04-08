#include<iostream>
using namespace std;
int main(){
int a,c;
cout<<"enter a0";
cin>>a;
int b[100];
b[0]=a;
b[1]=0;
cout<<b[0]<<"  ";
int j=1;
cout<<b[1]<<"  ";
for(int i=2;i<100;i++){
b[i]==-1;}
for(int k=0;k<98;k++){
j=j+1;
for(int i=j-2;i>=0;i--){
if(b[j-1]==b[i]){
b[j]=j-1-i;

cout<<b[j]<<"  ";
break;
}
else
b[j]=0;
}
//if(b[j]!=-1)
//b[j]=0;

cout<<b[j]<<"  ";

}
}
