#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int a,c=0;
     int b;
    a=n;
    for(int i=0;a!=1;i++){
        if(a%2==0){
            a=a/2;
            b=a;
            cout<<b<<endl;
            c++;
        }
        else{
            a=3*a+1;
            b=a;
            cout<<b<<endl;
            c++;
        }
    }
    cout<<"no.of steps ="<<c;
    /*for(int i=0;i<=c;i++){
        cout<<b[i]<<endl;
    }*/
}