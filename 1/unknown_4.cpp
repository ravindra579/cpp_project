#include<iostream>
#include<cmath>
using namespace std;
int reverse(int a,int n){
int b=0;
int c;
for(int i=n-1;a>0;i--){
    c=c%10;
    b=b+c*pow(10,i);
        a=a/10;
   
}}
int digit(int a){
int b=0;
for(int i=0;a>0;i++){
        a=a/10;
    b++;
}}
int func(int n,int k){
int a,b,c;
a=0;
    c=0;
for(int i=0;n>0;i++){
b=n%10;
        if(b==0)
        c++;
a=a+b;
n=n/10;}
if(a==k&&c==0)
return 1;
else 
return 0;
}
int swap(int a,int b){
    int r;
    r=0;
    int a1,b1;
    int a2,b2;
    a2=digit(a);
    b2=digit(b);
    if(a2==b2){
    a=reverse(a,a2);
    b=reverse(b,b2);
    for(int i=0;a>0&&b>0;i++){
    a1=a%10;
        b1=b%10;
        if(a1>b1){
        r=1;
        break;}
            }}
           if(a2-b2==1||b2-a2==1)
            {
            if(a2-b2==1){a=reverse(a,a2);
    b=reverse(b,b2);
    for(int i=0;a>0&&b>0;i++){
    a1=a%10;          
        b1=b%10;
        if(a1>b1&&i!=a2-1){
        r=1;
        break;}
               } 
            }else{a=reverse(a,a2);
    b=reverse(b,b2);
    for(int i=0;a>0&&b>0;i++){
    a1=a%10;          
        b1=b%10;
        if(a1>b1&&i!=b2-1){
        r=1;
        break;}
               } 
        }}
        
        return r;

   
}
int main(){
    int n,k,c,d;
int a[1000];
    cout<<"enter n,k";
    cin>>n>>k;
    int b=0;
    for(int i=0;i<n;i++){
    b=b+1*pow(10,i);
}
    int j=0;
    for(int i=b;i>=n;i--){
    c=i;
       d=func(c,n);
        if(d==1){
            a[j]=c;
        j++;}
    
}
    //int l[100];
   // for(int i=0;i<j;i++)
    //l[i]=a[i];
   int arr[100][100];
    int x,y,z1,z2;
    for(int i=0;i<j;i++){
        z1=a[i];
    for(int m=i+1;m<j;m++){
            z2=a[m];
        x=swap(z1,z2);
            if(x==1){
                y=a[i];
                a[i]=a[m];
            a[m]=y;
        }
    }
}
    for(int i=0;i<j;i++)
    cout<<a[i]<<endl;
    
    /*for(int i=0;i<j;i++){
        y=0;
        for(int m=0;m<n;m++){
            if(a[i]>0){
    x=a[i]%10;
        arr[i][y]=x;
        a[i]=a[i]/10;
            y++;}
           // else{
            //arr[i][y]=0;
               // y++;
        //}
            }
}
    
    for(int i=0;i<j;i++){
    for(int m=0;m<n;m++){
            if(arr[i][m]!=0)
    cout<<arr[i][m];
}
    cout<<endl;
}*/
}