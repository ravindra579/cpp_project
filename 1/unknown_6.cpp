#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[10],str2[10],x;
    cout<<"enter two words";
    cin>>str1>>str2;
    if(str1[0]=='a'||'e'||'i'||'o'||'u'&&str2[0]!='a'||'e'||'i'||'o'||'u'){
        x=str2[0];
        char y[10];
        for(int i=0;i<10;i++){
        y[i]=str1[i];
        }
        str1[0]=x;
        for(int i=0;i<10;i++){
        str1[i+1]=y[i];}
        
    }
if(str1[0]!='a'||'e'||'i'||'o'||'u'&&str2[0]!='a'||'e'||'i'||'o'||'u') {
        x=str1[0];
        str1[0]=str2[0];
        str2[0]=x;
    }   
    
cout<<str1<<str2;
}
