#include<iostream>
using namespace std;
int main(){
int a,b,c=0,d=0,e,f;
cout<<"enter no.of black and white balls"<<endl;
cin>>a>>b;
    e=a;
    f=b;
   // if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0)){
for(int i=0;a+b>1;i++){
        
if(b>1){
b=b-2;
c++;
}
if(a>0&&b==1){
a--;
c++;
}
if(a>1&&b==0){
a--;
c++;
}
        
//}
        }
 /* for(int i=0;e+f>1;i++)  {
    if(e>0){
        f--;
            d++;
    }
        if(e==0&&f>1){
        e--;
            d++;
    }
}*/
cout<<"min"<<c<<endl;
    cout<<"max"<<c<<endl;
    if(f%2==0)
    cout<<"last ball is black";
    if(f%2!=0)
    cout<<"last ball is white";
    
    //cout<<d;
}