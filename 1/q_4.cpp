#include<iostream>
using namespace std;
#include<cmath>
int main(){
int k=4;
int n=5;
int a[1000],b=1,c=0,d=0;
for(int i=1;i<=1000;i++)
a[i-1]=i;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
for(int r=0;r<10;r++){
for(int l=0;l<10;l++){
for(int m=0;m<10;m++){
for(int t=0;t<10;t++){
b=pow(a[i],k)+pow(a[j],k)+pow(a[r],k)+pow(a[l],k)+pow(a[m],k)-pow(a[t],k);

if(b==0&&c==0){
cout<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<m<<endl<<n<<endl;
c++;
break;
}
d++;
}}}
}
}}
cout<<d<<endl;
cout<<c;
}