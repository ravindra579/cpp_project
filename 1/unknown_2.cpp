#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    //int A=B=C=D=E=F=G=H=I=J=K=L=M=N=O=P=Q=R=S=T=U=V=W=X=Y
    char a[10];
    cout<<"enter a string";
    cin>>a;
    int sum=0;
    for(int i=0;i<strlen(a);i++){
   sum=sum+pow(26,i)*('a[0]'-64);

}
    cout<<sum<<endl;
    int x='a';
    cout<<x;
}