#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char str1[100],str2[100];
    cout<<"enter string";
    cin>>str1;
    for(int i=0;i<strlen(str1);i++){
        int k=0;
   for(int j=i+1;j<strlen(str1);j++){
           if(str1[i]==str1[j])
            k++;
        }
        if(k==0){
            cout<<str1[i];
            break;
            
        }
        else
        cout<<"failed";
    }
}