#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int t=0;
   int a[4]={3,4,5,6};
    int b[4]={3,4,5,6};
    int x[100],y[100];
    for(int i=4;i<=100;i++){
    x[i-4]=i;
    y[i-4]=i;
        
}
    for(int i=0;i<96;i++){
    for(int j=0;j<96;j++){
        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                t=pow(a[l],x[j])-pow(b[k],y[i]);
                    cout<<t<<endl;
                
            }
        }
    }
}
}