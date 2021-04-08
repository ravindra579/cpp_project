
#include<iostream>
using namespace std;
int main(){
int arr[5];
int freq[5];
cout<<"enter numbers";
cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    for(int i=0; i<5; i++)
    {freq[i]=-1;
       int count = 1;
        for(int j=i+1; j<5; j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }}
        
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    cout<<"\nFrequency  : \n";
    for(int i=0; i<5; i++)
    {
        if(freq[i] != 0)
        {
            cout<< arr[i]<<":"<<freq[i]<<endl;
        }
    }
}