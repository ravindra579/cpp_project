#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter pentagonal number";
    cin>>n;
    int sum=1;
    for(int i=0;i<n;i++){
        sum=sum+5;
        
    }
    cout<<endl<<sum;
}