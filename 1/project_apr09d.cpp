#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
    int t[100];
int n,k;
    cout<<"enter n,k";
    cin>>n>>k;
    int sum;
    a=0;
t[a]=0;
    
for(int i=1;i<n-1;i++){
        a++;
    t[a]=0;
}
    a++;
    t[a]=1;
    c=a;
    b=a;
   for(int i=c;i<k;i++){
      sum=0;
    for(int j=0;j<n;j++){
        sum=sum+t[b];
            b--;
    }
        a++;
        b=a;
        t[a]=sum;
}
    cout<<t[k-1];
    }