#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
//equation d^2T/dy^2= −(4*µ*U^2/H*4*κ)*(H − y)^2
//c=−(4*µ*U^2/H*4*κ)
//d^2T/dy^2=c*(H − y)^2
//double derivative d^2T/dy^2=T(i+1)-T(i)+T(i-1)/h,h=2*H/n
//T(i+1)-T(i)+T(i-1)/h^2=c*(H − y(i))^2
//T(i+1)-T(i)+T(i-1)=C*(H − i*h)^2 ,C=c*h^2
int n=(2*3)/0.001;
float b[n+1];
float a[n+1][4];
//rhs value c*(H − y)^2
for(int i=1;i<n;i++){
   b[i]=((-(4*0.1*5*5)/(3*3*3*3*0.08))*0.001*0.001)*(3-i*0.001)*(3-i*0.001);
}
//RHS last value c*(H − nh)^2-tn(5)
b[n-1]=b[n-1]-5;
int j=1;
//--------assigning of matrix ,coefficients of matrix are constant hard coded the coefficients-------------
a[1][1]=-2;
a[1][2]=1;
a[n-1][1]=-2;
a[n-1][0]=1;
for(int i=2;i<n-1;i++){
        a[i][0]=1;
        a[i][1]=-2;
        a[i][2]=1;
    }
//-----------------augumented matrix----------------------------------------
for(int i=1;i<n;i++){
    a[i][3]=b[i];
}
//----------------converting to row-echlon form-----------------------------
//this is particular for this one ,not general solution
for(int i=2;i<n;i++){
    for(j=0;j<=3;j++){
    a[i][j]*=i;
    }
}
a[2][0]=a[2][0]+a[1][0];
a[2][1]=a[2][1]+a[1][1];
a[2][3]=a[2][3]+a[1][3];
for(int i=3;i<n;i++){
    for(j=0;j<3;j++){
    if(j==2)
        a[i][3]=a[i][3]+a[i-1][3];
    else
        a[i][j]=a[i][j]+a[i-1][j+1];
}
}
//--------------------back substitution------------------------
b[0]=0;
b[n]=5;
j=n-1;
float z=0;
for(int i=n-1;i>1;i--){
    b[i]=(a[i][3]-z)/a[i][1];
    z=b[i]*a[i-1][2];
    if(i==2)
       z=b[i]*a[i-1][1];
}
b[1]=(a[1][3])/a[1][1];
//--------------------------storing in .csv file--------------------------
ofstream file;
file.open("example5.csv",ios::out);
for(int i=0;i<=n;i++){
file<<b[i]<<","<<i<<endl;
}
file.close();

//-------------------------------end------------------------------
}
