#include<iostream>
#include<cmath>
int func2(int i,int a,int n) {
    int c=0;
for(int j=1;j<100;j++){
     if(pow(i,n)+pow(a,n)==pow(j,n)){
            c=1;
            break;
            }
    }
    return c;
}

int func1(int a,int n){
    int b=0; 
    for(int i=1;i<100;i++) {
    b=func2(i,a,n);
        if(b==1)
        break;
} 
    return b;
}
    /*int func2(int i,int a,int n) {
    int c=0;
for(int j=1;j<10;j++){
     if(pow(i,n)+pow(a,n)==pow(j,n))
            c=1;
    }
    return c;
}*/


using namespace std;
int main(){
    int n;
    cout<<"enter n";
cin>>n;
int a=1,b=1,c=1,d=0,e=0;
   
        for(c;c<100;c++){
         d=func1(c,n);
             if(d==1)
              break;
        }
    
           if(d==1)
        cout<<"exist";
    else
cout<<"not exist";
}