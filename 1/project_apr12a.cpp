#include<iostream>
using namespace std;
int main(){
    int k,n,a,b,c;
    cout<<"enter k,n,a,b,c";
    cin>>k>>n>>a>>b>>c;
    int x,y=0,z=k;
    int l=0,m;
    int p=0,q=0,r=0;
   // if(k<n){
        x=((a>b)?((a>c)?a:c):((b>c)?b:c));
       m=((a<b)?((a<c)?a:c):((b<c)?b:c));
      l=((x==a&&m==b)||(x==b&&m==a))?c:(((x==b&&m==c)||(x==c&&m==b))?a:b);
       /* for(int i=0;y+x<n&&y!=n;i++){
        y=y+x-1;
            z++;
    }
        if(y!=n){
        for(int i=0;y<n&&y!=n;i++){
            if(n-y>=l){
                y=y+l-1;
                    z++;
            }
                if(n-y>=m&&n-y<l){
                y=y+m-1;
                    z++;
            }
                
        }
    }*/
       /*  for(int i=0;q+x-1<n&&q!=n;i++){
        q=q+x-1;
            r++;
    }
        p=q;
        for(int t=1;q!=n;t++){
        for(int i=0;q<n&&q!=n;i++){
            if(n-q>=l){
                q=q+l-1;
                    r++;
            }
             else if(n-q>=m&&n-q<l){
                q=q+m-1;
                    r++;
            }}
               if(q!=n){
                    q=q-p*t+1;
                    r--;
               }
                
        
    }
         
   // }
    cout<<z;
    cout<<r;*/
    q=1;
   for(p=2;z<=n;p++)  {
    for(q;z<=n;q++)
        for(r;z<=n;r++){
         z=k+(p-2)*(a-1)+(q-1)*(b-1)+r*(c-1);
                cout<<z<<endl;
                if(z==n){
                y=p+q+r-3;
                    
        }}
            cout<<"q";
    }
}
    //cout<<x<<m<<l;
   // cout<<y;
