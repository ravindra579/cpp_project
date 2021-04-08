#include<iostream>
using namespace std;
/*int func(int& a[0],int n){
    int a[100],b[100],c[100],d,n,e;
    for(int i=0;i<n;i++){
cin>>a[i];
}
int j=n-1;
for(int i=0;i<n;i++){
b[j]=a[i];
j--;
}
int m=0;

for(int i=n;i>0;i--){
d=b[0];
for(int k=1;k<i;k++){
if(d>b[k])
d=b[k];
}
c[m]=d*i;
        m++;
}
    for(int i=0;i<m;i++){
    for(int k=i+1;k<m;k++){
        if(c[i]<c[k]){
            e=c[i];
                c[i]=c[k];
                c[k]=e;
        }
    }}
        return c[0];
}
            
} */
int main(){
int a[100],b[100],c[100],d,n,e,l[100],p=0;
cout<<"enter length of sequence";
cin>>n;
cout<<"enter sequence";

for(int i=0;i<n;i++){
cin>>a[i];
}
   /* int x=0;
  for(int i=n;i>0;i++) {
    l[x]=func(a[0],i);
        x++
}*/
    //cout<<l(0);
    for(int t=0;t<n;t++){
        if(t!=0)
        a[t-1]=0;
int j=n-1;
for(int i=0;i<n;i++){
if(a[i]!=0)            
b[j]=a[i];
j--;
}
int m=0;

for(int i=n;i>0;i--){
d=b[0];
for(int k=1;k<i;k++){
if(d>b[k])
d=b[k];
}
c[m]=d*i;
        m++;
}
    for(int i=0;i<m;i++){
    for(int k=i+1;k<m;k++){
        if(c[i]<c[k]){
            e=c[i];
                c[i]=c[k];
                c[k]=e;
        }
    }}
       
        l[p]=c[0];
        p++; 
        }
        for(int i=0;i<p;i++){
    for(int k=i+1;k<p;k++){
        if(l[i]<l[k]){
            e=l[i];
                l[i]=l[k];
                l[k]=e;
        }
    }}        cout<<l[0];
}
