#include<iostream>
#include<cstring>
using namespace std;
int main(){
int n,m,a[10][10];
cout<<"enter array size";
    cin>>n>>m;
    cout<<"enter values";
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
            cin>>a[i][j];
        }}
    int i=0,j=0,sum=a[0][0];
    do{
        if(a[i][j+1]>=a[i+1][j]){
        sum=sum+a[i][j+1];
            j++;
            }
        else{
            sum=sum+a[i+1][j];
            i++;
        }}while(i<n&&j<m);
    cout<<sum;
    }