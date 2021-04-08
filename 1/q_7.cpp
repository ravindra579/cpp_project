#include<iostream>
using namespace std;
#include<cmath>
int main(){
int x[4]={3,4,5,6};
    int y[4]={3,4,5,6};
    int z[4]={3,4,5,6};
    int a[100];
for(int i=4;i<101;i++){
    a[i-4]=i;
}
  for(int i=0;i<96;i++){
        for(int j=0;j<96;j++){
            for(int k=0;k<96;k++){
       for(int l=3;l<7;l++){
  for(int m=3;m<7;m++){
       for(int n=3;n<7;n++){
                        x[0]=pow(a[i],l)+pow(a[j],m)-pow(a[k],n);
    if(x[0]==0){
 cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<"      ";
      cout<<l<<" "<<m<<" "<<n<<" "<<endl;
                        }
                        }
                    }
                }
}
        }
    }
}