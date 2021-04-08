
#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a,b,n;
    float c,d;
    cout<<"enter a,b,n";
    cin>>a>>b>>n;
    c=exp(log(a)/n);
    d=exp(log(b)/n);
    c=floor(c);
    d=ceil(d);
    cout<<d-c;
    return 0;

}